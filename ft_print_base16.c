/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base16.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:17 by eanastas          #+#    #+#             */
/*   Updated: 2022/01/11 23:25:13 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int x, int flag)
{
	int		len;
	long	num;

	len = 0;
	num = (long)x;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		++len;
	}
	len += printf_base16_util(num, len, flag);
	return (len);
}

int	ft_print_pointer(unsigned long int num)
{
	int		len;

	len = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		++len;
	}
	len += printf_base16_util(num, len, 0);
	return (len);
}

int	printf_base16_util(unsigned long num, int len, int flag)
{
	char	*ret;
	char	*set;
	int		i;

	if (flag == 0)
		set = "0123456789abcdef";
	if (flag == 1)
		set = "0123456789ABCDEF";
	i = 0;
	ret = (char *)malloc(30 * sizeof(char));
	if (!ret)
		return (0);
	while (num != 0)
	{
		ret[i++] = set[num % 16];
		num /= 16;
		++len;
	}
	ret[i] = '\0';
	while (i-- > 0)
		write(1, &ret[i], 1);
	free (ret);
	ret = NULL;
	return (len);
}
