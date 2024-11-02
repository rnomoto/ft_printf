/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:52:48 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 15:55:15 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ptr(uintptr_t nbr, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr > 15)
		count = ft_putnbr_ptr(nbr / 16, count);
	ft_putchar(base[nbr % 16]);
	count += 1;
	return (count);
}

// int main(void)
// {
// 	char str[] = "Hello World!";
// 	char **str_ptr = &str;
// 	uintptr_t nbr = (uintptr_t)str_ptr;
// 	int count = 0;
// 	count = ft_putnbr_ptr(nbr, count);
// 	printf("\n%d\n", count);

// 	return (0);
// }