NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printf_utils.c ft_put_c.c \
	ft_put_s.c ft_put_s.c ft_put_x.c ft_put_p.c

OBJS = $(SRCS:.c=.o)

HEADER = ./

.c.o:
	@$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJS)
	@ar cr $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(OBJS)

tests:
	@$(CC) $(CFLAGS) -o tests.out .tests.c -L. -lft -I./
	@valgrind --leak-check=full --show-leak-kinds=all -g ./tests.out
	@rm -f tests.out

re: fclean all

.PHONY: clean fclean re all
