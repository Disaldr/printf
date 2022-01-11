/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:12:20 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/13 18:39:22 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_next_word(char const *s, char c, int index)
{
	while (s[index] == (unsigned char) c)
		++index;
	return (index);
}

static int	ft_wlength(char const *s, char c, int index)
{
	int	length;

	length = 0;
	while (s[index] != (unsigned char) c && s[index])
	{
		++length;
		++index;
	}
	return (length);
}

static int	ft_count_str(char const *s, char c)
{
	int	index;
	int	nstr;

	index = 0;
	nstr = 0;
	while (s[index])
	{
		index = ft_next_word(s, c, index);
		if (s[index] == '\0')
			break ;
		index += ft_wlength(s, c, index);
		++nstr;
	}
	return (nstr);
}

char	**ft_split(char const *s, char c)
{
	int		nstr;
	int		index;
	char	**res;

	if (!s)
		return (NULL);
	res = (char **) malloc((ft_count_str(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	nstr = 0;
	index = 0;
	while (s[index])
	{
		index = ft_next_word(s, c, index);
		if (s[index] == '\0')
			break ;
		res[nstr++] = ft_substr(s, index, ft_wlength(s, c, index));
		index += ft_wlength(s, c, index);
	}
	res[nstr] = NULL;
	return (res);
}
