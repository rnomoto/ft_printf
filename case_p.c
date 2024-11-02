/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:16:51 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 21:23:57 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_p(va_list *ap, int count)
{
	void	*p;

	p = va_arg(*ap, void *);
	count = ft_putaddr(p, count);
	return (count);
}
