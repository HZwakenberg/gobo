indexing

	description:

		"XPath InstanceOf Expressions"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_INSTANCE_OF_EXPRESSION

inherit

	XM_XPATH_COMPUTED_EXPRESSION

creation

	make

feature {NONE} -- Initialization

	make (source: XM_XPATH_EXPRESSION; target: XM_XPATH_SEQUENCE_TYPE) is
			-- TODO
		do
		end

feature -- Access
	
	item_type: INTEGER is
			--Determine the data type of the expression, if possible
		do
			-- TODO
		end

feature -- Analysis

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
