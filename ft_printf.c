/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufukuda <yufukuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:23:30 by yufukuda          #+#    #+#             */
/*   Updated: 2023/02/17 05:31:41 by yufukuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_judgment(const char *str, va_list ap)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (*str == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (*str == 'p')
		count = ft_putpointer(va_arg(ap, unsigned long long));
	else if (*str == 'd')
		count = ft_putnbr_int(va_arg(ap, int));
	else if (*str == 'i')
		count = ft_putnbr_int(va_arg(ap, int));
	else if (*str == 'u')
		count = ft_putnbr_unsigned_int(va_arg(ap, unsigned int));
	else if (*str == 'x')
		count = ft_small_x(va_arg(ap, unsigned int));
	else if (*str == 'X')
		count = ft_large_x(va_arg(ap, unsigned int));
	else if (*str == '%')
		count = write(1, "%%", 1);
	else
		return (-1);
	return (count);
}

int	printf_check(const char *str, va_list ap)
{
	char	content;
	int		count;
	int		cnt;

	count = 0;
	cnt = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count = printf_judgment(str, ap);
			if (count < 0)
				return (-1);
		}
		else
		{
			content = *str;
			count = ft_putchar((int)content);
		}
		cnt += count;
		str++;
	}
	return (cnt);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		cnt;

	va_start(ap, str);
	cnt = printf_check(str, ap);
	va_end(ap);
	return (cnt);
}

// int	main(void)
// {
// 	char	c = 'A';
// 	char	s[] = "123456";
// 	int	my;
// 	int	m;

// // 	// m =     printf("printf = %c,\n", c);
// // 	// printf("m  = %d\n",m);
// 	m =  printf("printf = %c,%s,
// 	%p,%d,%i,%u,%x,%X,%%\n" ,
// 	 c, "abcd", s, -12345, -12345, 987654, 0, 0);
// 	printf("m = %d\n",m);
// 	my = ft_printf("printf = %c,%s,
// 	%p,%d,%i,%u,%x,%X,%4%\n" ,
// 	 c, "abcd", s, -12345, -12345, 987654, 0, 0);
// 	printf("my = %d\n",my);
// }
