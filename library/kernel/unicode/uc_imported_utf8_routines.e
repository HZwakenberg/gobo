indexing

	description:

		"Imported UTF-8 encoding routines"

	library: "Gobo Eiffel Kernel Library"
	copyright: "Copyright (c) 2001, Eric Bezault and others"
	license: "Eiffel Forum License v1 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class UC_IMPORTED_UTF8_ROUTINES

feature -- Access

	utf8: UC_UTF8_ROUTINES is
			-- UTF-8 encoding routines
		once
			!! Result
		ensure
			utf8_not_void: Result /= Void
		end

end
