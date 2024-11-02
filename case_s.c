/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:13:24 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 21:24:03 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_s(va_list *ap, int count)
{
	char	*s;

	s = va_arg(*ap, char *);
	ft_putstr(s);
	count = ft_strlen(s);
	return (count);
}
