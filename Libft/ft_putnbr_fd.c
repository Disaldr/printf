/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:01:42 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/19 22:12:16 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	dec;
	int			digit;

	if (fd < 0)
		return ;
	dec = 1;
	while (n / dec > 9 || n / dec < -9)
		dec *= 10;
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (dec)
	{
		digit = n / dec % 10;
		if (digit < 0)
			digit *= -1;
		ft_putchar_fd(digit + '0', fd);
		dec /= 10;
	}
}
