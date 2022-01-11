/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:39:21 by kmumm             #+#    #+#             */
/*   Updated: 2022/01/11 22:10:19 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_nums(long copy, int counter, char *num);

char	*ft_uitoa(unsigned int n)
{
	int		counter;
	long	copy;
	char	*num;

	counter = 0;
	copy = (long)n;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	if (copy == 0)
		counter++;
	num = (char *)malloc(sizeof(char) * (counter + 1));
	if (!num)
		return (NULL);
	num = fill_nums(copy, counter, num);
	return (num);
}

static char	*fill_nums(long copy, int counter, char *num)
{
	num[counter] = '\0';
	if (copy == 0)
		num[0] = '0';
	while (counter != 0)
	{
		counter--;
		num[counter] = (copy % 10) + '0';
		copy /= 10;
	}
	return (num);
}
