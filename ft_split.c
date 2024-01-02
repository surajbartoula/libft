/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 11:11:59 by sbartoul          #+#    #+#             */
/*   Updated: 2024/01/02 20:38:47 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countstr(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str != c)
		{
			count++;
			while (*str && *str != c)
				++str;
		}
		else
			++str;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
		return (0);
	strings = (char **)malloc(sizeof(char *) * (ft_countstr(s, c) + 1));
	if (!strings)
		return (0);
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			strings[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	strings[i] = 0;
	return (strings);
}
