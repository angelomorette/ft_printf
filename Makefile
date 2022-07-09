FLAGS = -Wall -Wextra -Werror

INCLUDES = -I./includes

.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o ${<:.c=.o}

NAME = libftprintf.a

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp -v libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) created"
	ranlib $(NAME)
	@echo "$(NAME) indexed"

all: $(NAME)

clean:
	rm -rf $(OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	rm -rf $(NAME) libft.a
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re
