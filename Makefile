NAME = push_swap.a
SRCS = cost_a.c cost_b.c do_cost_a.c do_cost_b.c \
		error.c init.c sort.c push_swap.c \
		utils.c stack_utils.c swap.c push.c \
		rotate.c reverse_rotate.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	$(MAKE) -C ./ft_printf
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	$(MAKE) -C ./libft clean
	$(MAKE) -C ./ft_printf clean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./libft fclean
	$(MAKE) -C ./ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
