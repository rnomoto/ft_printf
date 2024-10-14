/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:34:41 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 17:46:47 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar(*format);
			if (31 < *format && *format < 127)
				count += 1;
		}
		else if (*format == '%')
		{
			format++;
			count = convert(format, ap, count);
		}
		format++;
	}
	va_end(ap);
	return (count);
}

// int main(void)
// {
//     int d = -42;
//     char c = 'A';
//     char str[] = "hello";
//     unsigned int u = 42;
// 	int len = ft_printf("hello hello\n");
// 	printf("count: %d\n", len);

//     int len_n = ft_printf("%c%c\n", c, c);
// 	printf("count: %d\n", len_n);

//     int len_d = ft_printf("hello %d hello\n", d);
// 	printf("count: %d\n", len_d);

//     int len_s = ft_printf("%s\n", str);
// 	printf("count: %d\n", len_s);

//     int len_p = ft_printf("%p\n", str);
// 	printf("count: %d\n", len_p);

//     int len_u = ft_printf("%u\n", u);
// 	printf("count: %d\n", len_u);

//     len_d = ft_printf("%x\n", d);
// 	printf("count: %d\n", len_d);

//     len_d = ft_printf("%X\n", d);
// 	printf("count: %d\n", len_d);

// 	int len_len = ft_printf("%%\n");
// 	printf("count: %d\n", len_len);

//     return (0);
// }