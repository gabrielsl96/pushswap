#include "../push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*top;
	t_node	*new_top;
	t_node	*bottom;

	if (stack->size <= 1)
		return ;
	top = stack->top;
	new_top = top->next;
	stack->top = new_top;
	bottom = get_bottom(stack);
	top->next = bottom->next;
	bottom->next = top;
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
}
