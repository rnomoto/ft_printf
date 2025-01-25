/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:34:41 by rnomoto           #+#    #+#             */
/*   Updated: 2025/01/25 21:01:14 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdio.h>

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
			count += 1;
		}
		else if (*format == '%')
		{
			format++;
			count += convert(format, &ap, count);
		}
		format++;
	}
	va_end(ap);
	return (count);
}

// int main(void)
// {
// 	int a = ft_printf(" %s", "");
// 	printf("\n");
// 	int b = printf(" %s", "");
// 	printf("\n");
// 	if (a == b)
// 		printf("output ok\n");
// 	else
// 		printf("output ko\nft_printf: %d\n   printf: %d\n", a, b);

// 	return 0;
// }
