/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:29:15 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 15:06:27 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_count(int nb, int count)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
        count += 11;
		return count;
	}
	if (nb < 0)
	{
		ft_putchar('-');
        count += 1;
		nb = -nb;
	}
	if (nb > 9)
		count = ft_putnbr_count(nb / 10, count);
	ft_putchar(nb % 10 + 48);
	count += 1;
	return (count);
}

// int main(void)
// {
//     int nb = -214748364;
//     int count = 0;
//     count = ft_putnbr_count(nb, count);
//     printf("\n%d\n", count);

//     return 0;
// }