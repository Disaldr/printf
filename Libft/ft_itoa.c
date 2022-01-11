/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:47:37 by kmumm             #+#    #+#             */
/*   Updated: 2022/01/11 20:40:05 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_dec(int pow)
{
	long	result;

	result = 1;
	while (pow)
	{
		result *= 10;
		--pow;
	}
	return (result);
}

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;

	count = 1;
	while (n / ft_dec(count))
		++count;
	if (n < 0)
		++count;
	result = (char *) malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	result[0] = '0';
	result[count--] = '\0';
	if (n < 0)
		result[0] = '-';
	while (n != 0)
	{
		result[count--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
