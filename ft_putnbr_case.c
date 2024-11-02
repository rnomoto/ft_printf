/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:51:03 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 20:04:37 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_case(int nbr, int count, char case_type)
{
	char	*base;

	base = NULL;
	if (case_type == 'a')
		base = "0123456789abcdef";
	else if (case_type == 'A')
		base = "0123456789ABCDEF";
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
		count += 1;
	}
	if (nbr >= 16)
	{
		count = ft_putnbr_case(nbr / 16, count, case_type);
	}
	ft_putchar(base[nbr % 16]);
	count += 1;
	return (count);
}
