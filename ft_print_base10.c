/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:12 by eanastas          #+#    #+#             */
/*   Updated: 2022/01/11 22:04:36 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int num)
{
	int		len;
	char	*str;

	str = ft_itoa(num);
	len = 0;
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		++len;
	}
	free (str);
	str = NULL;
	return (len);
}

int	ft_print_uint(unsigned int num)
{
	int		len;
	char	*str;

	str = ft_uitoa(num);
	len = 0;
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		++len;
	}
	free (str);
	str = NULL;
	return (len);
}
