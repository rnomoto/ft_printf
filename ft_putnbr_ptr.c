/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:52:48 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/13 14:47:56 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_ptr(uintptr_t nbr)
{
	char *base = "0123456789abcdef";

	if (nbr >= 16)
	{
		ft_putnbr_ptr(nbr / 16);
	}
	ft_putchar(base[nbr % 16]);
}