indexing

	description:

		"Objects that return the first item in a sequence"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_FIRST_ITEM_EXPRESSION

inherit

	XM_XPATH_UNARY_EXPRESSION
		redefine
			optimize, promote, compute_cardinality, evaluate_item
		end

create

	make

feature {NONE} -- Initialization

	make (a_base_expression: XM_XPATH_EXPRESSION) is
			-- Establish invaraint.
		require
			base_expression_not_void: a_base_expression /= Void
		do
			make_unary (a_base_expression)
			compute_static_properties
		ensure
			static_properties_computed: are_static_properties_computed
			base_expression_set: base_expression = a_base_expression
		end

feature -- Optimization

	optimize (a_context: XM_XPATH_STATIC_CONTEXT; a_context_item_type: XM_XPATH_ITEM_TYPE) is
			-- Perform optimization of `Current' and its subexpressions.
		do
			mark_unreplaced
			base_expression.optimize (a_context, a_context_item_type)
			if base_expression.was_expression_replaced then
				set_base_expression (base_expression.replacement_expression)
			end
			if base_expression.is_error then
				set_last_error (base_expression.error_value)
			else
				if not base_expression.cardinality_allows_many then
					set_replacement (base_expression)
				end
			end
		end

	promote (an_offer: XM_XPATH_PROMOTION_OFFER) is
			-- Promote this subexpression.
		local
			a_promotion: XM_XPATH_EXPRESSION
		do
			an_offer.accept (Current)
			a_promotion := an_offer.accepted_expression
			if a_promotion /= Void then
				set_replacement (a_promotion)
			else
				if not (an_offer.action = Unordered) then
					base_expression.promote (an_offer)
					if base_expression.was_expression_replaced then
						set_base_expression (base_expression.replacement_expression)
						reset_static_properties
					end
				end
			end
		end

feature -- Evaluation

	evaluate_item (a_result: DS_CELL [XM_XPATH_ITEM]; a_context: XM_XPATH_CONTEXT) is
			-- Evaluate as a single item to `a_result'.
		local
			l_iterator: XM_XPATH_SEQUENCE_ITERATOR [XM_XPATH_ITEM]
		do
			if base_expression.is_node_sequence then
				base_expression.create_node_iterator (a_context)
				l_iterator := base_expression.last_node_iterator
			else
				base_expression.create_iterator (a_context)
				l_iterator := base_expression.last_iterator
			end
			if l_iterator.is_error then
				a_result.put (create {XM_XPATH_INVALID_ITEM}.make (l_iterator.error_value))
			else
				l_iterator.start
				if l_iterator.is_error then
					a_result.put (create {XM_XPATH_INVALID_ITEM}.make (l_iterator.error_value))
				elseif not l_iterator.after then
					a_result.put (l_iterator.item)
				else
					a_result.put (Void)
				end
			end
		end

feature {XM_XPATH_UNARY_EXPRESSION} -- Restricted
	
	display_operator: STRING is
			-- Format `operator' for display
		do
			Result := "first item of"
		end

feature {NONE} -- Implementation
	
	compute_cardinality is
			-- Compute cardinality.
		do
			clone_cardinality (base_expression)
			set_cardinality_disallows_many
		end

end
