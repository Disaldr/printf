/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:35:53 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/04 19:14:25 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t length)
{
	size_t			index;
	unsigned char	*new;

	index = 0;
	new = b;
	while (index < length)
	{
		*(new + index) = (unsigned char) c;
		++index;
	}
	return (b);
}
