/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:47:21 by sbartoul          #+#    #+#             */
/*   Updated: 2024/01/07 03:09:01 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t buffersize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	space;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (buffersize <= destlen)
		return (buffersize + srclen);
	space = buffersize - destlen - 1;
	if (srclen <= space)
	{
		ft_memcpy(dest + destlen, src, srclen);
		dest[destlen + srclen] = '\0';
	}
	else
	{
		ft_memcpy(dest + destlen, src, space);
		dest[buffersize - 1] = '\0';
	}
	return (destlen + srclen);
}
