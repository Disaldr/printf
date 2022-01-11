/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:19:13 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 16:10:53 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in(const char *s1, char c)
{
	UINT	index;

	index = 0;
	while (s1[index])
	{
		if (s1[index] == c)
			return (1);
		++index;
	}
	return (0);
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

char	*ft_strtrim(char const *s1, char const *set)
{
	UINT	start;
	UINT	end;
	UINT	index;
	char	*res;

	if (!s1)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_nullstr());
	start = 0;
	while (ft_in(set, s1[start]) && s1[start])
		++start;
	end = ft_strlen(s1) - 1;
	while (ft_in(set, s1[end]) && end != 0)
		--end;
	if (end < start)
		return (ft_nullstr());
	res = (char *) malloc((end - start) + 2);
	if (!res)
		return (NULL);
	index = 0;
	while (start != end + 1)
		res[index++] = s1[start++];
	res[index] = '\0';
	return (res);
}
