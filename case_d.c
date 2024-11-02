/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:19:22 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 21:23:38 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_d(va_list *ap, int count)
{
	int	d;

	d = va_arg(*ap, int);
	count = ft_putnbr_count(d, count);
	return (count);
}
