/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:54:21 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 21:27:52 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_c(va_list *ap, int count)
{
	char	c;

	c = va_arg(*ap, int);
	//printf("Read char: %c\n", c);
	ft_putchar(c);
	count += 1;
	return (count);
}
