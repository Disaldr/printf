/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:59:47 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 12:50:52 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*string;

	string = (unsigned char *) s;
	index = 0;
	while (index < n)
	{
		if (string[index] == (unsigned char) c)
			return ((void *) string + index);
		++index;
	}
	return (NULL);
}
