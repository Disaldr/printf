/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:12:43 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 18:45:20 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	UINT	length1;
	UINT	length2;
	UINT	index;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	res = (char *) malloc((length1 + length2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	index = 0;
	while (index != length1)
	{
		res[index] = s1[index];
		++index;
	}
	while (index != length1 + length2)
	{
		res[index] = s2[index - length1];
		++index;
	}
	res[length1 + length2] = '\0';
	return (res);
}
