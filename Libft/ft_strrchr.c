/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:36:48 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 14:03:30 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	size_t	location;

	index = 0;
	location = 0;
	while (s[index])
	{
		if (s[index] == (unsigned char) c)
			location = index;
		++index;
	}
	if (s[index] == (unsigned char) c)
		location = index;
	if (location == 0 && s[0] != (unsigned char) c)
		return (NULL);
	return ((char *) s + location);
}
