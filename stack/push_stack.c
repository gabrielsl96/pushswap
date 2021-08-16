#include "../push_swap.h"

int	push_stack(t_stack *begin, int num)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (1);
	new_node->next = begin->top;
	new_node->num = num;
	begin->top = new_node;
	begin->size += 1;
	return (0);
}
