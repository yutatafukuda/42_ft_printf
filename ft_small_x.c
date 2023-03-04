/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:53:27 by yufukuda          #+#    #+#             */
/*   Updated: 2023/02/17 00:25:49 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexadecimal_tolower_write(unsigned long long number)
{
	int		count;
	char	*hexadecimal_base;
	char	c;

	count = 0;
	hexadecimal_base = "0123456789abcdef";
	c = hexadecimal_base[number];
	count += write(1, &c, 1);
	return (count);
}

int	ft_hexadecimal_tolower(unsigned long long nbr)
{
	unsigned long long	number;
	int					count;

	number = nbr;
	count = 0;
	if (number > 0)
	{
		number = nbr % 16;
		count += ft_hexadecimal_tolower(nbr / 16);
		count += hexadecimal_tolower_write(nbr % 16);
		return (count);
	}
	return (count);
}

int	ft_small_x(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		count += ft_hexadecimal_tolower(nbr);
	return (count);
}
