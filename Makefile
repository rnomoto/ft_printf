NAME = libftprintf.a
SRCS = main.c ft_putchar.c ft_putnbr.c ft_putstr.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

$(NAME):$(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re