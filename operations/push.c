#include "../push_swap.h"

void	push(t_stack *get, t_stack *push)
{
	t_node	*temp;

	if (get->size <= 1)
		return ;
	temp = get->top;
	get->top = temp->next;
	temp->next = push->top;
	push->top = temp;
	push->size += 1;
	get->size -= 1;
}
