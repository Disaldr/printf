/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:10:48 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/05 22:44:59 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *) s1;
	str2 = (char *) s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i])
		++i;
	if (str1[i] == str2[i])
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
