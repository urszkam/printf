NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_put_c.c ft_put_u.c\
	ft_put_s.c ft_put_d.c ft_put_x.c ft_put_p.c \

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
	@(cd .tests; bash .tests.sh)

re: fclean all

.PHONY: clean fclean re all
