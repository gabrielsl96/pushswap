NAME = push_swap

SRC = 	main.c \
		stack/free_stack.c stack/push_stack.c stack/get_bottom.c \
		stack/get_node.c \
		operations/swap.c operations/push.c  operations/rotate.c \
		operations/reverse_rotate.c

OBJS = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra -g -fsanitize=address

all:	$(NAME)

clean:
		rm -rf $(OBJS)
		make clean -C ./libft

fclean:	clean
		rm -rf $(NAME)
		make fclean -C ./libft

re:		fclean all

%.o: %.C
		$(CC) $(FLAGS)-c $< -o $@

$(NAME): libft $(OBJS)
		make -C ./libft
		$(CC) $(FLAGS) $(OBJS) ./libft/libft.a -o $(NAME)
