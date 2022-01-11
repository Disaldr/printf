/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:51:51 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 13:49:10 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	dst_length;

	dst_length = ft_strlen(dst);
	index = 0;
	if (dst_length >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (index < dstsize - dst_length - 1 && src[index])
	{
		dst[dst_length + index] = src[index];
		++index;
	}
	dst[dst_length + index] = '\0';
	return (dst_length + ft_strlen(src));
}
