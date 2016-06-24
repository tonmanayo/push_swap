NAME = Push_swap
SRC = main.c \
	  stack.c \
	  stack1.c \
	  stack_rules.c \
	  stack_rules2.c
LIBDIR = libft
LIB = libft/libft.a
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C $(LIBDIR)
	@gcc $(FLAGS) -o $(NAME) $(SRC) $(LIB)

clean:
	@make fclean -C $(LIBDIR)

fclean: clean
	@make fclean -C $(LIBDIR)
	@rm -rf $(NAME)

re: fclean all
