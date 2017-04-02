/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:24:22 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/01 12:34:37 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[j])
	{
		while (s1[j] == s2[i] && s2[i] && j < len)
		{
			i++;
			j++;
		}
		if (s2[i] == '\0')
			return ((char*)s1 + j - i);
		else
		{
			j = j - i;
			i = 0;
		}
		j++;
	}
	if (s1[j] == s2[i])
		return ((char*)s1 + j);
	return (NULL);
}
