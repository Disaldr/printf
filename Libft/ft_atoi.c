/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:49:25 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 13:43:11 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					index;
	int					sign;
	unsigned long long	result;

	index = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[index]))
		++index;
	if (str[index] == '-' || str[index] == '+')
	{
		sign = 44 - str[index];
		++index;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		if (result > 9223372036854775807)
			return (-(sign + 1) / 2);
		result = result * 10 + (str[index++] - '0');
	}
	return ((int) result * sign);
}
