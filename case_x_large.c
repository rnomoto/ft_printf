/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_lx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:22:36 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 21:23:48 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_lx(va_list *ap, int count)
{
	int	d;

	d = va_arg(*ap, int);
	count = ft_putnbr_case(d, count, 'a');
	return (count);
}
