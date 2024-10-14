/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:41:45 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/14 15:30:49 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *, ...);
int	case_c(va_list ap, int count);
int	case_d(va_list ap, int count);
int	case_lx(va_list ap, int count);
int	case_p(va_list ap, int count);
int	case_s(va_list ap, int count);
int	case_u(va_list ap, int count);
int	case_ux(va_list ap, int count);
int	ft_putaddr(void *s, int count);
void	ft_putchar(char c);
int	ft_putnbr_case(int nbr, int count, char case_type);
int	ft_putnbr_count(int nb, int count);
int	ft_putnbr_ptr(uintptr_t nbr, int count);
int	ft_putnbr_unsign(unsigned int nb, int count);
void	ft_putstr(char *str);

#endif