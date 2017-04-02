/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 13:59:43 by vbauguen          #+#    #+#             */
/*   Updated: 2016/02/03 22:21:11 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmchr(char *haystack, char *needles)
{
	int		i;
	size_t	j;

	j = 0;
	i = 0;
	while (j < ft_strlen(needles))
	{
		while (haystack[i])
		{
			if (haystack[i] == needles[j])
				return ((char*)(haystack + i));
			i++;
		}
		j++;
	}
	return (NULL);
}
