/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_ux.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:25:16 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 21:24:15 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_ux(va_list *ap, int count)
{
	int	d;

	d = va_arg(*ap, int);
	count = ft_putnbr_case(d, count, 'A');
	return (count);
}
