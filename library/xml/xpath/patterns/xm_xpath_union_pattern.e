indexing

	description:

		"XPath union patterns"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_UNION_PATTERN

inherit

	XM_XPATH_PATTERN
		redefine
			simplify, type_check
		end

creation

	make

feature {NONE} -- Initialization

	make (p1, p2: XM_XPATH_PATTERN) is
			-- Establish invariant.
		require
				pattern_one_not_void: p1 /= Void
				pattern_two_not_void: p2 /= Void
		do
			left_hand_side := p1
			right_hand_side := p2
			if p1.item_type = p2.item_type then
				node_type := p1.item_type
			else
				node_type := Any_node
			end
		ensure
				pattern_one_set: left_hand_side = p1
				pattern_two_set: right_hand_side = p2
		end

feature -- Access

	node_test: XM_XPATH_NODE_TEST is
			-- Retrieve an `XM_XPATH_NODE_TEST' that all nodes matching this pattern must satisfy
		do
			if node_type = Any_node then
				create {XM_XPATH_ANY_NODE_TEST} Result.make
			else
				create {XM_XPATH_NODE_KIND_TEST} Result.make (node_type)
			end
		end

feature -- Analysis

	simplify: XM_XPATH_PATTERN is
			-- Simplify a pattern by applying any context-independent optimizations;
			-- Default implementation does nothing
		do
			create {XM_XPATH_UNION_PATTERN} Result.make (left_hand_side.simplify, right_hand_side.simplify)
		end

	type_check (context: XM_XPATH_STATIC_CONTEXT): XM_XPATH_PATTERN is
			-- Type-check the pattern;
			-- Default implementation does nothing. This is only needed for patterns that contain
			-- variable references or function calls.
		do
			create {XM_XPATH_UNION_PATTERN} Result.make (left_hand_side.type_check (context), right_hand_side.type_check (context))
		end

feature -- Matching

	matches (a_node: XM_XPATH_NODE; a_controller: XM_XSLT_CONTROLLER): BOOLEAN is
			-- Determine whether this Pattern matches the given Node;
			-- This is the main external interface for matching patterns:
			--  it sets current() to the node being tested
			-- The controller is only relevant if the pattern
			--  uses variables, or contains calls on functions such as document() or key().
		do
			Result := left_hand_side.matches (a_node, a_controller) or else right_hand_side.matches (a_node, a_controller)
		end

feature {NONE} -- Implementation

	left_hand_side, right_hand_side: XM_XPATH_PATTERN
			-- Patterns forming union

	node_type: INTEGER
			-- Type of nodes in this pattern

invariant

	pattern_one_not_void: left_hand_side /= Void
	pattern_two_not_void: right_hand_side /= Void

end
	
