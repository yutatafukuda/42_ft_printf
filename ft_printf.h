/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:26:24 by yufukuda          #+#    #+#             */
/*   Updated: 2023/02/17 00:48:07 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		printf_check(const char *str, va_list ap);
int		printf_judgment(const char *str, va_list ap);
int		ft_putchar(int content);
int		ft_putstr(char *str);
int		ft_putnbr_int(int nbr);
int		ft_putpointer(unsigned long long nbr);
int		ft_small_x(unsigned int nbr);
int		ft_hexadecimal_tolower(unsigned long long nbr);
int		ft_large_x(unsigned int nbr);
size_t	ft_strlen(const char *str);
int		ft_putnbr_unsigned_int(unsigned int nbr);

#endif