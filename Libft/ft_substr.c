/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:04:37 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 15:11:19 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_min(long a, long b)
{
	if (a > b)
		return (b);
	return (a);
}

static char	*ft_nullstr(void)
{
	char	*str;

	str = (char *) malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	UINT	length;
	UINT	index;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (length <= start)
		return (ft_nullstr());
	result = (char *) malloc(ft_min(length - start, len) + 1);
	if (!result)
		return (NULL);
	index = start;
	while (index - start != (UINT) len && s[index])
	{
		result[index - start] = s[index];
		++index;
	}
	result[index - start] = '\0';
	return (result);
}
