/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:57:31 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 15:58:06 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(void *s, int count)
{
	void		**ad;
	uintptr_t	adr;

	ad = &s;
	adr = (uintptr_t)ad;
	write(1, "0x", 2);
	count += 2;
	count += ft_putnbr_ptr(adr, count - 2);
	return (count);
}

// int main(void)
// {
//     char *str = "Hello World!";
// 	int count = 0;
//     int n = ft_putaddr(str, count);
// 	printf("\n%d\n", n);

//     return (0);
// }