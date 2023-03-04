/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:09:21 by yufukuda          #+#    #+#             */
/*   Updated: 2023/02/11 21:10:01 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long long nbr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (nbr == 0)
		count += write(1, "0", 1);
	else
		count += ft_hexadecimal_tolower(nbr);
	return (count);
}
