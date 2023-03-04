/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:07:59 by yufukuda          #+#    #+#             */
/*   Updated: 2023/02/15 17:52:19 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_int(int nbr)
{
	long int	number;
	int			count;

	count = 0;
	number = nbr;
	if (number < 0)
	{
		count += ft_putchar('-');
		number *= -1;
	}
	if (number >= 10)
		count += ft_putnbr_int(number / 10);
	count += ft_putchar(number % 10 + '0');
	return (count);
}
