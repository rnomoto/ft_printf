/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:40:36 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 15:18:04 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsign(unsigned int nb, int count)
{
	if (nb > 9)
		count = ft_putnbr_unsign(nb / 10, count);
	ft_putchar(nb % 10 + 48);
	count += 1;
	return count;
}