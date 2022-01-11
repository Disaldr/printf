/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:12:18 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/19 21:40:07 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	char	*result;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	result = (char *) malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	result[length--] = '\0';
	while (length != -1)
	{
		result[length] = f(length, s[length]);
		--length;
	}
	return (result);
}
