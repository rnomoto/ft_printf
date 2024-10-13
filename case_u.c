/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:21:07 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/13 17:21:51 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_u(va_list ap)
{
	unsigned int u;
	u = va_arg(ap, unsigned int);
	ft_putnbr_unsign(u);
}