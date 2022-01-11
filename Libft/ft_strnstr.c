/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:45:43 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 11:49:04 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hindex;
	size_t	nindex;

	hindex = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[hindex])
	{
		nindex = 0;
		while (nindex + hindex < len
			&& needle[nindex] == haystack[hindex + nindex])
		{
			++nindex;
			if (needle[nindex] == '\0')
				return (((char *)haystack + hindex));
		}
		++hindex;
	}
	return (NULL);
}
