/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:40:07 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 17:46:38 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert(const char *format, va_list ap, int count)
{
	int	conv;

	conv = *format;
	if (conv == 'c')
		count = case_c(ap, count);
	else if (conv == 's')
		count = case_s(ap, count);
	else if (conv == 'p')
		count = case_p(ap, count);
	else if (conv == 'd' || conv == 'i')
		count = case_d(ap, count);
	else if (conv == 'u')
		count = case_u(ap, count);
	else if (conv == 'x')
		count = case_lx(ap, count);
	else if (conv == 'X')
		count = case_ux(ap, count);
	else if (conv == '%')
	{
		ft_putchar('%');
		count += 1;
	}
	format++;
	return (count);
}