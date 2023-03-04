/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:04:17 by yufukuda          #+#    #+#             */
/*   Updated: 2023/02/15 21:45:42 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int content)
{
	char	content_c;
	int		count;

	content_c = content;
	count = write(1, &content_c, 1);
	return (count);
}

// int main(void)
// {
// 	int content;
// 	content = 'a';
// 	ft_putchar(content);
// }