indexing

	description:

		"XPath Axis Expressions"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_AXIS_EXPRESSION

inherit

	XM_XPATH_COMPUTED_EXPRESSION

	XM_XPATH_AXIS

creation

	make

feature {NONE} -- Initialization

	make (an_axis_type: INTEGER; a_node_test: XM_XPATH_NODE_TEST) is
			-- TODO
		do
			axis := an_axis_type
		ensure
			axis_set: axis = an_axis_type
		end

feature -- Access
	
	item_type: INTEGER is
			--Determine the data type of the expression, if possible
		do
			-- TODO
		end

	axis: INTEGER
			-- Type of axis


	node_test: XM_XPATH_NODE_TEST
			-- Node test

feature -- Status report

	display (level: INTEGER; pool: XM_XPATH_NAME_POOL) is
			-- Diagnostic print of expression structure to `std.error'
		local
			a_string, test_string: STRING
		do
			if node_test = Void then
				test_string := "node()"
			else
				test_string := node_test.original_text
			end
			a_string := STRING_.appended_string (indent (level), axis_name (axis))
			a_string := STRING_.appended_string (a_string, "::")
			a_string := STRING_.appended_string (a_string, test_string)
			std.error.put_string (a_string)
			std.error.put_new_line
		end

feature -- Optimization

	analyze (env: XM_XPATH_STATIC_CONTEXT): XM_XPATH_EXPRESSION is
			-- Perform static analysis of an expression and its subexpressions
		do
		end

feature {NONE} -- Implementation
	
	compute_cardinality is
			-- Compute cardinality.
		do
			-- TODO
		end
	
end
