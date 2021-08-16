#include "../push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	t_node	*top;
	t_node	*bottom;
	t_node	*new_bottom;

	if (stack->size <= 1)
		return ;
	top = stack->top;
	bottom = get_bottom(stack);
	bottom->next = top;
	new_bottom = get_node(stack, stack->size - 1);
	new_bottom->next = NULL;
	stack->top = bottom;
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
