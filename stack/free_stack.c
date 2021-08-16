#include "../push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*temp;
	t_node	*next;

	temp = stack->top;
	next = stack->top;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	stack->size = 0;
}
