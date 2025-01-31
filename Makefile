NAME = libftprintf.a
SRCS = $(wildcard libft/*.c) case_c.c case_d.c case_x_large.c case_p.c case_s.c case_u.c case_x_small.c \
		ft_putaddr.c ft_putchar.c ft_putnbr_case.c ft_putnbr_count.c ft_putnbr_ptr.c ft_putnbr_unsign.c \
		ft_putstr.c main.c convert.c
OBJS = $(SRCS:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re