indexing

	description:

		"Expressions that reverse a sequence of nodes"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_REVERSER

inherit

	XM_XPATH_COMPUTED_EXPRESSION

creation

	make

feature {NONE} -- Initialization

	make (an_expression: XM_XPATH_EXPRESSION) is
			-- Establish invariant.
		require
			base_expression_not_void: an_expression /= Void
		do
			base_expression := an_expression
		ensure
			base_expression_set: base_expression = an_expression
		end

feature -- Access

	base_expression: XM_XPATH_EXPRESSION
			-- Base expression

	item_type: INTEGER is
			--Determine the data type of the expression, if possible
		do
			-- TODO
		end

feature -- Status report

	display (level: INTEGER; pool: XM_XPATH_NAME_POOL) is
			-- Diagnostic print of expression structure to `std.error'
		local
			a_string: STRING
		do
			a_string := STRING_.appended_string (indent (level), "Sort into Reverse Order")
			std.error.put_string (a_string)
			std.error.put_new_line
			base_expression.display (level + 1, pool)
		end

feature -- Optimization

	analyze (env: XM_XPATH_STATIC_CONTEXT): XM_XPATH_EXPRESSION is
			-- Perform static analysis of an expression and its subexpressions
		do
			-- TODO
		end

feature {NONE} -- Implementation
	
	compute_cardinality is
			-- Compute cardinality.
		do
			-- TODO
		end

invariant

	base_expression_not_void: base_expression /= Void

end
	
