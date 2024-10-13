/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:57:31 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/13 14:48:10 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(void *s)
{
	void		**ad;
	uintptr_t	adr;

	ad = &s;
	adr = (uintptr_t)ad;
	write(1, "0x", 2);
	ft_putnbr_ptr(adr);
}

// int main(void)
// {
//     char *str = "Hello World!";
//     ft_putaddress(str);

//     return (0);
// }