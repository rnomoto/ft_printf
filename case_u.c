/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:21:07 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 21:24:20 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_u(va_list *ap, int count)
{
	unsigned int	u;

	u = va_arg(*ap, unsigned int);
	count = ft_putnbr_unsign(u, count);
	return (count);
}
