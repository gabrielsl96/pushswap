#include "../push_swap.h"

t_node	*get_bottom(t_stack *stack)
{
	t_node	*next;
	t_node	*prev;

	if (stack->size == 0)
		return (NULL);
	if (stack->size == 1)
		return (stack->top);
	next = stack->top;
	while (next)
	{
		prev = next;
		next = next->next;
	}
	return (prev);
}
