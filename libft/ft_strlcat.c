/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:14:57 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/01 13:36:10 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
	{
		++i;
		if (i > size)
			return (ft_strlen(src) + size);
	}
	while (*src && i < size - 1)
	{
		dst[i] = *src;
		++i;
		src = src + 1;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
