/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:51:03 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/13 15:12:17 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_case(int nbr, char case_type)
{
	char *base = NULL;
	if (case_type == 'a')
		base = "0123456789abcdef";
	else if (case_type == 'A')
		base = "0123456789ABCDEF";
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr >= 16)
	{
		ft_putnbr_case(nbr / 16, case_type);
	}
	ft_putchar(base[nbr % 16]);
}