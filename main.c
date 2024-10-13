/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:34:41 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/13 17:40:24 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	converse(const char *format, va_list ap)
{
	int	conv;

	conv = *format;
	if (conv == 'c')
		case_c(ap);
	else if (conv == 's')
		case_s(ap);
	else if (conv == 'p')
		case_p(ap);
	else if (conv == 'd' || conv == 'i')
		case_d(ap);
	else if (conv == 'u')
		case_u(ap);
	else if (conv == 'x')
		case_lx(ap);
	else if (conv == 'X')
		case_ux(ap);
	else if (conv == '%')
		ft_putchar('%');
	format++;
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
			ft_putchar(*format);
		else if (*format == '%')
		{
			format++;
			converse(format, ap);
		}
		format++;
	}
	va_end(ap);
	return (ft_strlen(format));
}

// int main(void)
// {
//     int d = -42;
//     char c = 'A';
//     char str[] = "hello";
//     unsigned int u = 42;
//     ft_printf("hello %c hello%c\n", c, c);
//     ft_printf("hello %d hello\n", d);
//     ft_printf("hello %s hello\n", str);
//     ft_printf("%p\n", str);
//     ft_printf("hello %u hello\n", u);
//     ft_printf("hello %x hello\n", d);
//     ft_printf("hello %X hello\n", d);
//     ft_printf("hello %% hello\n");

//     return (0);
// }