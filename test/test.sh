#!/bin/sh

make re
cc -Wall -Werror -Wextra printout.c testprintf.a
./a.out > ft_printf.txt
cc -Wall -Werror -Wextra test.c testprintf.a
./a.out