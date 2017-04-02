/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:38:34 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/02 15:38:37 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimchar(char const *s, char c)
{
	int		i;
	int		j;
	char	*dst;

	j = 0;
	i = ft_strlen(s) - 1;
	while (s[j] == c)
		j++;
	while (s[i] == c && i > j)
		i--;
	if (i == j)
		return (ft_strdup(""));
	dst = ft_strsub(s, j, i + 1 - j);
	return (dst);
}
