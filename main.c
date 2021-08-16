#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	while (node)
	{
		ft_putnbr_fd(node->num, 1);
		write(1, "\n", 1);
		node = node->next;
	}
	write(1, "Size:", 5);
	ft_putnbr_fd(stack->size, 1);
	write(1, "\n", 1);
}

int	check_duplicate(t_stack *stack, int args)
{
	int		i;
	t_node	*temp_1;
	t_node	*temp_2;

	i = 0;
	temp_1 = stack->top;
	while (i < (args - 1))
	{
		temp_2 = temp_1->next;
		while (temp_2)
		{
			if (temp_1->num == temp_2->num)
			{
				free_stack(stack);
				return (1);
			}
			temp_2 = temp_2->next;
		}
		temp_1 = temp_1->next;
		i++;
	}
	return (0);
}

int	set_stack(char **nums, int args, t_stack *stack)
{
	int		temp;
	char	c;

	while (--args > 0)
	{
		temp = ft_atoi(nums[args]);
		if ((temp < MIN_INT || temp > MAX_INT)
			|| push_stack(stack, temp))
		{
			free_stack(stack);
			return (1);
		}
	}
	return (0);
}

int	check_notnum(char **nums)
{
	int	i;
	int	j;

	i = 1;
	while (nums[i])
	{
		j = 0;
		if (nums[i][j] == '-')
			j++;
		while (nums[i][j])
		{
			if (!ft_isdigit(nums[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	stack_a.top = NULL;
	stack_a.size = 0;
	stack_b.top = NULL;
	stack_b.size = 0;
	if (argc <= 1
		|| check_notnum(argv)
		|| set_stack(argv, argc, &stack_a)
		|| check_duplicate(&stack_a, argc - 1))
	{
		write(STDERR_FILENO, "\033[1;31mError\n", 14);
		return (-1);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
