#include "../push_swap.h"

t_node	*get_node(t_stack *stack, int index)
{
	int		i;
	t_node	*node;

	if (index < 1 || index > stack->size)
		return (NULL);
	i = 1;
	node = stack->top;
	while (i++ < index)
		node = node->next;
	return (node);
}
