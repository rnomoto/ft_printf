/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:41:45 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/13 17:36:03 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *, ...);
void	case_c(va_list ap);
void	case_d(va_list ap);
void	case_lx(va_list ap);
void	case_p(va_list ap);
void	case_s(va_list ap);
void	case_u(va_list ap);
void	case_ux(va_list ap);
void	ft_putaddress(void *s);
void	ft_putchar(char c);
void	ft_putnbr_case(int nbr, char case_type);
void	ft_putnbr_ptr(uintptr_t nbr);
void	ft_putnbr_unsign(unsigned int nb);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putnbr_ptr(uintptr_t nbr);

#endif