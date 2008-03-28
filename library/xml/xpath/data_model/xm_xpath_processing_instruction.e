indexing

	description:

		"XPath Processing-instruction nodes"

	library: "Gobo Eiffel XML Library"
	copyright: "Copyright (c) 2003, Colin Adams and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"

deferred class XM_XPATH_PROCESSING_INSTRUCTION

inherit

	XM_XPATH_NODE
		redefine
			typed_value
		end

feature -- Access

	node_kind: STRING is
			-- Kind of node
		do
			Result := "processing-instruction"
		ensure then
			node_kind_is_processing_instruction: STRING_.same_string (Result, "processing-instruction")
		end

	item_type: XM_XPATH_ITEM_TYPE is
			-- Type
		do
			Result := processing_instruction_node_kind_test
		end

	typed_value: XM_XPATH_SEQUENCE_ITERATOR [XM_XPATH_ATOMIC_VALUE] is
			-- Typed value
		local
			l_value: XM_XPATH_STRING_VALUE
		do
			create  l_value.make (string_value)
			create {XM_XPATH_SINGLETON_ITERATOR [XM_XPATH_STRING_VALUE]} Result.make (l_value)
		end

end
