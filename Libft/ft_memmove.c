/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:28:40 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/04 22:07:51 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		destination = (unsigned char *)dst;
		source = (unsigned char *)src;
		while (len--)
			*destination++ = *source++;
	}
	else
	{
		destination = (unsigned char *)dst + (len - 1);
		source = (unsigned char *)src + (len - 1);
		while (len--)
			*destination-- = *source--;
	}
	return (dst);
}
