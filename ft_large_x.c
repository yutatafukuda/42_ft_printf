/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_large_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:11:37 by yufukuda          #+#    #+#             */
/*   Updated: 2023/02/17 00:43:18 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexadecimal_toupper_write(unsigned int number)
{
	int		count;
	char	*hexadecimal_base;
	char	c;

	count = 0;
	hexadecimal_base = "0123456789ABCDEF";
	c = hexadecimal_base[number];
	count += write(1, &c, 1);
	return (count);
}

static int	ft_hexadecimal_toupper(unsigned int nbr)
{
	unsigned int	number;
	int				count;

	number = nbr;
	count = 0;
	if (number > 0)
	{
		number = nbr % 16;
		count += ft_hexadecimal_toupper(nbr / 16);
		count += hexadecimal_toupper_write(nbr % 16);
		return (count);
	}
	return (count);
}

int	ft_large_x(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		count += ft_hexadecimal_toupper(nbr);
	return (count);
}
