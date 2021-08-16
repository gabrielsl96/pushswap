#include "../push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*temp;

	if (stack->size <= 1)
		return ;
	first = stack->top;
	second = first->next;
	stack->top = second;
	temp = first;
	first->next = second->next;
	second->next = temp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
