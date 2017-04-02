/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:20:15 by vbauguen          #+#    #+#             */
/*   Updated: 2015/11/30 15:12:00 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_verif(const char *s1, const char *s2, int i, int j)
{
	while (s1[i] == s2[j])
	{
		if (s2[j] == '\0')
			return (1);
		i++;
		j++;
	}
	if (s2[j] == '\0' && (s2[j - 1] == s1[i - 1]))
		return (1);
	return (0);
}

char			*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char*)s1);
	while (s1[i])
	{
		if (s1[i] == s2[j])
		{
			if (ft_verif(s1, s2, i, j) == 1)
				return ((char*)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
