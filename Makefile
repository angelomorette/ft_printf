FLAGS = -Wall -Wextra -Werror

INCLUDES = -I./includes

.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o ${<:.c=.o}

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c ft_putchar.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) libft.a

re: fclean all

.PHONY: all clean fclean re
