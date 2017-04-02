/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:54:39 by vbauguen          #+#    #+#             */
/*   Updated: 2015/11/27 17:35:54 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	i = 0;
	while (tmp1[i] == tmp2[i] && i < n)
		i++;
	if (i >= n)
		return ((unsigned char)tmp1[i - 1] - (unsigned char)tmp2[i - 1]);
	return ((unsigned char)tmp1[i] - (unsigned char)tmp2[i]);
}
