/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 17:18:53 by vbauguen          #+#    #+#             */
/*   Updated: 2016/01/14 17:23:53 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(char *haystack, int nth, char needle)
{
	int i;
	int j;

	j = 0;
	i = -1;
	while (haystack[++i])
	{
		if (haystack[i] == needle)
		{
			j++;
			if (j == nth)
				return (haystack + i + 1);
		}
	}
	return (ft_strdup(""));
}
