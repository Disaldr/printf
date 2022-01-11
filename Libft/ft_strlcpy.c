/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:46:08 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 13:49:18 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_index;

	src_index = 0;
	if (dstsize == 0)
	{
		while (src[src_index])
			++src_index;
		return (src_index);
	}
	while (src_index < dstsize - 1 && src[src_index])
	{
		dst[src_index] = src[src_index];
		src_index++;
	}
	dst[src_index] = '\0';
	while (src[src_index])
		++src_index;
	return (src_index);
}
