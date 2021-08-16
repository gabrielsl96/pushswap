#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_INT 2147483647
# define MIN_INT -2147483647
# include "./libft/libft.h"

typedef struct s_node
{
	int				num;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	int			size;
	t_node		*top;
}				t_stack;

void	free_stack(t_stack *stack);
int		push_stack(t_stack *begin, int num);
void	swap(t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *get, t_stack *push);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	rrr(t_stack *a, t_stack *b);
t_node	*get_bottom(t_stack *stack);
t_node	*get_node(t_stack *stack, int index);
#endif
