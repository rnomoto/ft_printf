/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:34:41 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/11 21:01:46 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int d;
    char c;
    char *s;
    int conv;

    va_start(ap, format);
    while(*format)
    {
        if(*format != '%')
            ft_putchar(*format);
        else if(*format == '%')
        {
            format++;
            conv = *format;
            if(conv == 'c')
            {
                c = va_arg(ap, int);
                //why int?
                ft_putchar(c);
            }
            else if(conv == 's')
            {
                s = va_arg(ap, char *);
                ft_putstr(s);
            }
            else if(conv == 'd' || conv == 'i')
            {
                d = va_arg(ap, int);
                ft_putnbr(d);
            }
        }
        format++;
    }
    va_end(ap);
    return (ft_strlen(format));
}

int main(void)
{
    int d = 42;
    char c = 'A';
    char str[] = "hello";
    ft_printf("hello %c hello\n", c);
    ft_printf("hello %d hello\n", d);
    ft_printf("hello %s hello\n", str);

    return 0;
}