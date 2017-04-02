/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:47:13 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/14 20:01:25 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*dst;

	if (!*s)
		return (ft_strdup(""));
	j = 0;
	i = ft_strlen(s);
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[j] != '\0')
		j++;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0') \
		&& i > 0)
		i--;
	if (j > i)
		return (ft_strdup(""));
	dst = ft_strsub(s, j, i + 1 - j);
	return (dst);
}
