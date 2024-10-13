/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:40:36 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/13 17:43:11 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsign(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putnbr_unsign(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}