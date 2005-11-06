indexing

	description:

		"Routines for normalizing Unicode strings"

	library: "Gobo Eiffel String Library"
	copyright: "Copyright (c) 2005, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

deferred class ST_UNICODE_NORMALIZATION_INTERFACE

inherit

	UC_UNICODE_CONSTANTS

	KL_COMPARATOR [INTEGER]
		export {NONE} all end

	KL_IMPORTED_INTEGER_ROUTINES
		export {NONE} all end

	KL_IMPORTED_STRING_ROUTINES
		export {NONE} all end

	UC_IMPORTED_UNICODE_ROUTINES
		export {NONE} all end

		-- N.B. These routines will not work on UTF-16 strings - they will
		--  need a few modifications to account of surrogates.

feature -- Access

	is_nfd (a_source: STRING): BOOLEAN is
			-- Is `a_source' in NFD normal form?
		require
			source_not_void: a_source /= Void
		local
			a_state: UT_TRISTATE
		do
			a_state := quick_check (a_source, Nfd)
			check
				state_not_void: a_state /= Void
				boolean_result: not a_state.is_undefined
				-- post-conditions of `quick_check'
			end
			if a_state.is_true then
				Result := True
			end
		end

	is_nfkd (a_source: STRING): BOOLEAN is
			-- Is `a_source' in NFKD normal form?
		require
			source_not_void: a_source /= Void
		local
			a_state: UT_TRISTATE
		do
			a_state := quick_check (a_source, Nfkd)
			check
				state_not_void: a_state /= Void
				boolean_result: not a_state.is_undefined
				-- post-conditions of `quick_check'
			end
			if a_state.is_true then
				Result := True
			end
		end

	is_nfc (a_source: STRING): BOOLEAN is
			-- Is `a_source' in NFC normal form?
		require
			source_not_void: a_source /= Void
		local
			a_state: UT_TRISTATE
		do
			a_state := quick_check (a_source, Nfc)
			if a_state.is_true then
				Result := True
			elseif a_state.is_undefined then
				Result := STRING_.same_string (a_source, to_nfc (a_source))
			end
		end

	is_nfkc (a_source: STRING): BOOLEAN is
			-- Is `a_source' in NFKC normal form?
		require
			source_not_void: a_source /= Void
		local
			a_state: UT_TRISTATE
		do
			a_state := quick_check (a_source, Nfkc)
			if a_state.is_true then
				Result := True
			elseif a_state.is_undefined then
				Result := STRING_.same_string (a_source, to_nfkc (a_source))
			end
		end

	as_nfd (a_source: STRING): STRING is
			-- Canonical decomposition of `a_source'
		require
			source_not_void: a_source /= Void
		local
			changed: DS_CELL [BOOLEAN]
			a_decomposition: DS_ARRAYED_LIST [INTEGER]
		do
			if a_source.is_empty then
				Result := a_source
			else
				create changed.make (False)
				a_decomposition := decomposition (a_source, True, changed)
				if not changed.item then
					Result := a_source
				else
					Result := string_from_code_points (a_decomposition)
				end
			end
		ensure
			result_not_void: Result /= Void
			nfd: is_nfd (Result)
		end

	to_nfd (a_source: STRING): STRING is
			-- Canonical decomposition of `a_source'
		require
			source_not_void: a_source /= Void
			source_not_normalized: not is_nfd (a_source)
		local
			changed: DS_CELL [BOOLEAN]
		do
			if a_source.is_empty then
				Result := ""
			else
				create changed.make (False)
				Result := string_from_code_points (decomposition (a_source, True, changed))
			end
		ensure
			result_not_void: Result /= Void
			nfd: is_nfd (Result)
			new_object: Result /= a_source
		end

	as_nfkd (a_source: STRING): STRING is
			-- Compatibility decomposition of `a_source'
		require
			source_not_void: a_source /= Void
		local
			changed: DS_CELL [BOOLEAN]
			a_decomposition: DS_ARRAYED_LIST [INTEGER]
		do
			if a_source.is_empty then
				Result := a_source
			else
				create changed.make (False)
				a_decomposition := decomposition (a_source, False, changed)
				if not changed.item then
					Result := a_source
				else
					Result := string_from_code_points (a_decomposition)
				end
			end
		ensure
			result_not_void: Result /= Void
			nfd: is_nfd (Result)
		end

	to_nfkd (a_source: STRING): STRING is
			-- Compatibility decomposition of `a_source'
		require
			source_not_void: a_source /= Void
			source_not_normalized: not is_nfd (a_source)
		local
			changed: DS_CELL [BOOLEAN]
		do
			if a_source.is_empty then
				Result := ""
			else
				create changed.make (False)
				Result := string_from_code_points (decomposition (a_source, False, changed))
			end
		ensure
			result_not_void: Result /= Void
			nfd: is_nfd (Result)
			new_object: Result /= a_source
		end

	to_nfc (a_source: STRING): STRING is
			-- Canonical decomposition then canonical composition of `a_source'
		require
			source_not_void: a_source /= Void
		local
			changed: DS_CELL [BOOLEAN]
			a_decomposition: DS_ARRAYED_LIST [INTEGER]
		do
			if a_source.is_empty then
				Result := ""
			else
				create changed.make (False)
				a_decomposition := decomposition (a_source, True, changed)
				canonically_compose (a_decomposition)
				Result := string_from_code_points (a_decomposition)
			end
		ensure
			result_not_void: Result /= Void
			nfc: is_nfc (Result)
			new_object: Result /= a_source
		end

	to_nfkc (a_source: STRING): STRING is
			-- Compatibility decomposition then canonical composition of `a_source'
		require
			source_not_void: a_source /= Void
		local
			changed: DS_CELL [BOOLEAN]
			a_decomposition: DS_ARRAYED_LIST [INTEGER]
		do
			if a_source.is_empty then
				Result := ""
			else
				create changed.make (False)
				a_decomposition := decomposition (a_source, False, changed)
				canonically_compose (a_decomposition)
				Result := string_from_code_points (a_decomposition)
			end
		ensure
			result_not_void: Result /= Void
			nfkc: is_nfkc (Result)
			new_object: Result /= a_source
		end

feature -- Status report

	valid_code (a_code_point: INTEGER): BOOLEAN is
			-- Is `a_code_point' a valid Unicode code point?
		do
			Result := unicode.valid_code (a_code_point)
		end

	frozen less_than (u, v: INTEGER): BOOLEAN is
			-- Is `u' considered less than `v'?
		do

			-- This will fail to meet the post-conditions
			--  if u and v do not represent valid code-points.
			-- This additional implied pre-condition is met by usage
			--  within `Current', and this routine is not exported
			--  from `Current', so violation will not occur.
			-- Feature frozen to avoid abuse.

			if valid_code (u) and valid_code (v) then
				Result := canonical_combining_class_property (u) < canonical_combining_class_property (v)
			end
		end

feature -- Property

	canonical_combining_class_property (a_code_point: INTEGER): INTEGER is -- should be NATURAL_8
			-- Canonical_Combining_Class property for `a_code_point'
		require
			valid_code_point: valid_code (a_code_point)
		local
			i, j, k, a_rem: INTEGER
		do
			i := a_code_point // (65536)
			a_rem  := a_code_point \\ (65536)
			j := a_rem // 256
			k := a_rem \\ 256

			Result := injected_canonical_combining_class (canonical_combining_class_properties.item (i).item (j).item (k))
		ensure
			result_in_range: Result >= 0 and Result <= 255
		end

	decomposition_type_property (a_code_point: INTEGER): INTEGER is
			-- Decomposition_Type property for `a_code_point'
		require
			valid_code_point: valid_code (a_code_point)
		local
			i, j, k, a_rem: INTEGER
		do
			i := a_code_point // (65536)
			a_rem  := a_code_point \\ (65536)
			j := a_rem // 256
			k := a_rem \\ 256
			Result := decomposition_type_properties.item (i).item (j).item (k)
		ensure
			result_in_range: Result >= Canonical_decomposition_mapping and Result <= Compatibility_decomposition_mapping
		end

	decomposition_mapping_property (a_code_point: INTEGER): DS_ARRAYED_LIST [INTEGER] is
			-- Decomposition_Mapping property for `a_code_point'
		require
			valid_code_point: valid_code (a_code_point)
		local
			i, j, k, a_rem: INTEGER
		do
			i := a_code_point // (65536)
			a_rem  := a_code_point \\ (65536)
			j := a_rem // 256
			k := a_rem \\ 256
			Result := decomposition_mapping_properties.item (i).item (j).item (k)
		ensure
			compatibility_mapping_not_empty: decomposition_type_property (a_code_point) /= Canonical_decomposition_mapping implies
				Result /= Void and then not Result.is_empty
		end

feature {NONE} -- Implementation

	Nfd: INTEGER is 0
	Nfc: INTEGER is 1
	Nfkd: INTEGER is 2
	Nfkc: INTEGER is 3
			-- Normal forms
	
	quick_check (a_source: STRING; a_form: INTEGER): UT_TRISTATE is
			-- Quick check for `a_source' being in `a_form'
		require
			source_not_void: a_source /= Void
			valid_normal_form: a_form >= Nfd and a_form <= Nfkc
		local
			i, c, len, last_combining_class, a_combining_class: INTEGER
			a_check: UT_TRISTATE
		do
			create Result.make_true
			from i := 1; len := a_source.count until Result.is_false or i > len loop
				c := a_source.item_code (i)
				a_combining_class := canonical_combining_class_property (c)
				if last_combining_class > a_combining_class and a_combining_class /= 0 then
					Result.set_false
				else
					inspect
						a_form
					when Nfd then
						a_check := nfd_quick_check (c)
					when Nfkd then
						a_check := nfkd_quick_check (c)
					when Nfc then
						a_check := nfc_quick_check (c)
					when Nfkc then
						a_check := nfkc_quick_check (c)
					end
					if a_check.is_false then
						Result.set_false
					elseif a_check.is_undefined then
						Result.set_undefined
					end
					last_combining_class := a_combining_class
				end
				i := i + 1
			end
		ensure
			quick_check_not_void: Result /= Void
			boolean_result_for_decompositions: (a_form = Nfd or a_form = Nfkd) implies not Result.is_undefined
		end

	nfd_quick_check (a_code_point: INTEGER): UT_TRISTATE is
			-- NFD quick ceck property for `a_code_point'
		require
			valid_code_point: valid_code (a_code_point)
		local
			i, j, k, a_rem: INTEGER
		do
			i := a_code_point // (65536)
			a_rem  := a_code_point \\ (65536)
			j := a_rem // 256
			k := a_rem \\ 256
			Result := nfd_quick_check_array.item (i).item (j).item (k)
		ensure
			quick_check_not_void: Result /= Void
			boolean_result: not Result.is_undefined
		end

	nfkd_quick_check (a_code_point: INTEGER): UT_TRISTATE is
			-- NFKD quick ceck property for `a_code_point'
		require
			valid_code_point: valid_code (a_code_point)
		local
			i, j, k, a_rem: INTEGER
		do
			i := a_code_point // (65536)
			a_rem  := a_code_point \\ (65536)
			j := a_rem // 256
			k := a_rem \\ 256
			Result := nfkd_quick_check_array.item (i).item (j).item (k)
		ensure
			quick_check_not_void: Result /= Void
			boolean_result: not Result.is_undefined
		end

	nfc_quick_check (a_code_point: INTEGER): UT_TRISTATE is
			-- NFC quick ceck property for `a_code_point'
		require
			valid_code_point: valid_code (a_code_point)
		local
			i, j, k, a_rem: INTEGER
		do
			i := a_code_point // (65536)
			a_rem  := a_code_point \\ (65536)
			j := a_rem // 256
			k := a_rem \\ 256
			Result := nfc_quick_check_array.item (i).item (j).item (k)
		ensure
			quick_check_not_void: Result /= Void
		end

	nfkc_quick_check (a_code_point: INTEGER): UT_TRISTATE is
			-- NFKC quick ceck property for `a_code_point'
		require
			valid_code_point: valid_code (a_code_point)
		local
			i, j, k, a_rem: INTEGER
		do
			i := a_code_point // (65536)
			a_rem  := a_code_point \\ (65536)
			j := a_rem // 256
			k := a_rem \\ 256
			Result := nfkc_quick_check_array.item (i).item (j).item (k)
		ensure
			quick_check_not_void: Result /= Void
		end

	order_canonically (a_decomposition: DS_ARRAYED_LIST [INTEGER]; changed: DS_CELL [BOOLEAN]) is
			-- Perform Canonical Ordering on `a_decomposition'.
		require
			decomposition_not_empty: a_decomposition /= Void and then not a_decomposition.is_empty
			change_flag_not_void: changed /= Void
		local
			a_start, a_finish, len: INTEGER
			a_sorter: DS_BUBBLE_SORTER [INTEGER]
		do
			create a_sorter.make (Current)
			from a_start := 1; len := a_decomposition.count until a_start >= len loop
				a_finish := end_of_combining_sequence (a_decomposition, a_start, len)
				if not a_sorter.subsorted (a_decomposition, a_start, a_finish) then
					a_sorter.subsort (a_decomposition, a_start, a_finish)
					changed.put (True)
				end
				a_start := a_finish + 1
			end
		ensure
			in_canonical_order: True
		end

	end_of_combining_sequence  (a_decomposition: DS_ARRAYED_LIST [INTEGER]; a_start, len: INTEGER): INTEGER is
			-- Last character in combining sequence
		require
			decomposition_not_empty: a_decomposition /= Void and then not a_decomposition.is_empty
			correct_length: len = a_decomposition.count
			start_in_range: a_start > 0 and a_start < len
		local
			a_combining_class: INTEGER
			finished: BOOLEAN
		do
			from Result := a_start until Result >= len or finished loop
				if Result /= len then
					a_combining_class := canonical_combining_class_property (a_decomposition.item (Result + 1))
					if a_combining_class = 0 then
						finished := True
					else
						Result := Result + 1
					end
				end
			end
		end

	recursively_decompose (a_code_point: INTEGER; is_canonical: BOOLEAN; a_decomposition: DS_ARRAYED_LIST [INTEGER]; changed: DS_CELL [BOOLEAN]) is
			-- Recursively decompose `a_code_point' into `a_decomposition'
		require
			decomposition_not_void: a_decomposition /= Void
			change_flag_not_void: changed /= Void
			valid_code_point: valid_code (a_code_point)
		local
			i, j, k, a_rem, x, len: INTEGER
			a_mapping: DS_ARRAYED_LIST [INTEGER]
		do
			i := a_code_point // (65536)
			a_rem  := a_code_point \\ (65536)
			j := a_rem // 256
			k := a_rem \\ 256
			a_mapping := decomposition_mapping_properties.item (i).item (j).item (k)
			if a_mapping /= Void and not (is_canonical and decomposition_type_properties.item (i).item (j).item (k) /= Canonical_decomposition_mapping) then
				changed.put (True)
				from x := 1; len := a_mapping.count until x > len loop
					recursively_decompose (a_mapping.item (x), is_canonical, a_decomposition, changed)
					x := x + 1
				end
			else

				-- no suitable decomposition

				a_decomposition.force_last (a_code_point)
			end
		end

	string_from_code_points (a_decomposition: DS_ARRAYED_LIST [INTEGER]): STRING is
			-- String from code-point list
		require
			decomposition_not_void: a_decomposition /= Void
		local
			a_cursor: DS_ARRAYED_LIST_CURSOR [INTEGER]
		do
			from
				a_cursor := a_decomposition.new_cursor; a_cursor.start
				create Result.make (a_decomposition.count)
			until a_cursor.after loop
				Result := STRING_.appended_string (Result, unicode.code_to_string (a_cursor.item))
				a_cursor.forth
			end
		ensure
			string_not_void: Result /= Void
			same_count: Result.count = a_decomposition.count
		end

	decomposition (a_source: STRING; is_canonical: BOOLEAN; changed: DS_CELL [BOOLEAN]): DS_ARRAYED_LIST [INTEGER] is
			-- Decomposition of `a_source'
		require
			source_not_void: a_source /= Void
			change_flag_not_void: changed /= Void
		local
			i, len: INTEGER
			a_code_point: INTEGER
		do
			len := a_source.count
			create Result.make (len)
			from i := 1 until i > len loop
				a_code_point := a_source.item_code (i)
				recursively_decompose (a_code_point, is_canonical, Result, changed)
				i := i + 1
			end
			order_canonically (Result, changed)
		ensure
			decomposition_not_void: Result /= Void
			in_canonical_order: True
		end

	canonically_compose (a_decomposition: DS_ARRAYED_LIST [INTEGER]) is
			-- Canonically compose `a_decomposition' in place.
		require
			decomposition_not_empty: a_decomposition /= Void and then not a_decomposition.is_empty
			in_canonical_order: True
		local
			a_comp_pos, a_decomp_pos, a_starter, a_starter_pos: INTEGER
			a_class, a_last_class, a_code_point, a_composite, len: INTEGER
			a_key: DS_HASHABLE_PAIR [INTEGER, INTEGER]
		do
			a_decomp_pos := 1; a_comp_pos := 2
			a_starter := a_decomposition.item (a_decomp_pos); a_starter_pos := 1
			a_last_class := canonical_combining_class_property (a_starter)
			if a_last_class /= 0 then a_last_class := 256 end -- strings starting with a combining mark
			len := a_decomposition.count
			from
				a_decomp_pos := a_comp_pos
			until
				a_decomp_pos > a_decomposition.count
			loop
				a_code_point := a_decomposition.item (a_decomp_pos); a_decomp_pos := a_decomp_pos + 1
				a_class :=  canonical_combining_class_property (a_code_point)
				create a_key.make (a_starter, a_code_point)
				if composition_map.has (a_key) and (a_last_class < a_class or a_last_class = 0) then
					a_composite := composition_map.item (a_key)
					a_decomposition.replace (a_composite, a_starter_pos)
					a_starter := a_composite
				else
					if a_class = 0 then
						a_starter_pos := a_comp_pos
						a_starter := a_code_point
					end
					a_last_class := a_class
					a_decomposition.replace (a_code_point, a_comp_pos)
					if a_decomposition.count /= len then
						a_decomp_pos := a_decomp_pos + a_decomposition.count - len
						len := a_decomposition.count
					end
					a_comp_pos := a_comp_pos + 1
				end
			end
			if a_comp_pos <= a_decomposition.count then a_decomposition.keep_first (a_comp_pos - 1) end
		ensure
			decomposition_not_empty: a_decomposition /= Void and then not a_decomposition.is_empty
		end
			
	nfd_quick_check_array: ARRAY [ARRAY [ARRAY [UT_TRISTATE]]] is
			-- NFD_Quick_Check values for each code point
		deferred
		ensure
			nfd_quick_check_array_not_void: Result /= Void
			-- no_void_nfd_quick_check_array: not Result.has (Void)
		end

	nfc_quick_check_array: ARRAY [ARRAY [ARRAY [UT_TRISTATE]]] is
			-- NFC_Quick_Check values for each code point
		deferred
		ensure
			nfc_quick_check_array_not_void: Result /= Void
			-- no_void_nfc_quick_check_array: not Result.has (Void)
		end

	nfkd_quick_check_array: ARRAY [ARRAY [ARRAY [UT_TRISTATE]]] is
			-- NFKD_Quick_Check values for each code point
		deferred
		ensure
			nfkd_quick_check_array_not_void: Result /= Void
			-- no_void_nfkd_quick_check_array: not Result.has (Void)
		end

	nfkc_quick_check_array: ARRAY [ARRAY [ARRAY [UT_TRISTATE]]] is
			-- NFKC_Quick_Check values for each code point
		deferred
		ensure
			nfkc_quick_check_array_not_void: Result /= Void
			-- no_void_nfkc_quick_check_array: not Result.has (Void)
		end

	canonical_combining_class_properties: ARRAY [ARRAY [ARRAY [INTEGER_8]]] is
			-- Values of Canonical_Combining_Class for each code-point
		deferred
		ensure
			canonical_combining_class_properties_not_void: Result /= Void
			-- no_void_canonical_combining_class_property: not Result.has (Void)
		end

	decomposition_type_properties: ARRAY [ARRAY [ARRAY [INTEGER_8]]] is
		-- Decomposition type property for each code point
		deferred
		ensure
			decomposition_type_properties_not_void: Result /= Void
			-- no_void_decomposition_type_property: not Result.has (Void)
		end

	decomposition_mapping_properties: ARRAY [ARRAY [ARRAY [DS_ARRAYED_LIST [INTEGER]]]] is
			-- Decomposition mapping property for each code point
		deferred
		ensure
			decomposition_mapping_properties_not_void: Result /= Void
		end

	composition_map: DS_HASH_TABLE [INTEGER, DS_HASHABLE_PAIR [INTEGER, INTEGER]] is
			-- Map of compositions indexed by hashed character pairs
		deferred
		ensure
			composition_map_not_void: composition_map /= Void
		end

	string_to_array8 (a_string: STRING): ARRAY [INTEGER_8] is
			-- Zero-indexed byte array interpretation of `a_string';
			-- Numbers > 127 are encoded as negative numbers.
		require
			string_not_void: a_string /= Void
			correct_length: a_string.count = 256
		local
			i: INTEGER
			j: INTEGER_8
		do
			create Result.make (0, 255)
			from i := 0 until i > 255 loop
				j := INTEGER_.to_integer_8 (a_string.item (i + 1).code)
				Result.put (j, i)
				i := i + 1
			end
		ensure
			array_not_void: Result /= Void
			zero_indexed: Result.lower = 0
			correct_count: Result.upper = 255
		end

	injected_canonical_combining_class (a_class: INTEGER_8): INTEGER is
			-- Canonical combining class injected from a small set of integers
		require
			valid_projection: a_class >= 0 and a_class <= 60
		local
			c: INTEGER
		do
			c := a_class -- for VE - as also the lack of .. notation
			inspect
				c
			when 0 then
				Result := 0
			when 1 then
				Result := 1
			when 2 then
				Result := 7
			when 3 then
				Result := 8								
			when 4 then
				Result := 9								
			when 5 then
				Result := 10								
			when
				6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
				18, 19,20, 21, 22, 23, 24, 25, 26, 27, 28,
				29, 30, 31
			 then
				Result := INTEGER_.to_integer_8 (a_class + 5)								
			when 32 then
				Result := 84								
			when 33 then
				Result := 91								
			when 34 then
				Result := 103								
			when 35 then
				Result := 107								
			when 36 then
				Result := 118				
			when 37 then
				Result := 122							
			when 38 then
				Result := 129					
			when 39 then
				Result := 130							
			when 40 then
				Result := 132							
			when 41 then
				Result := 199
			when 42 then
				Result := 200							
			when 43 then
				Result := 202							
			when 44 then
				Result := 204							
			when 45 then
				Result := 208							
			when 46 then
				Result := 210							
			when 47 then
				Result := 212							
			when 48 then
				Result := 214							
			when 49 then
				Result := 216							
			when 50 then
				Result := 218							
			when 51 then
				Result := 220							
			when 52 then
				Result := 222							
			when 53 then
				Result := 224							
			when 54 then
				Result := 226							
			when 55 then
				Result := 228							
			when 56 then
				Result := 230							
			when 57 then
				Result := 232							
			when 58 then
				Result := 233							
			when 59 then
				Result := 234							
			when 60 then
				Result := 240							
			end
		ensure
			number_in_range: Result >= 0 and Result <= 240
		end

end
