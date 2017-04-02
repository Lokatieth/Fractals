/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:18:30 by vbauguen          #+#    #+#             */
/*   Updated: 2015/11/27 19:02:49 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i++] == (char)c)
			j = i - 1;
	}
	if (s[i] == c)
		return ((char*)(s + i));
	if (j != -1)
		return ((char*)(s + j));
	return (NULL);
}
