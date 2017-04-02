/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:26:16 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/10 16:53:00 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if ((s1[i] > s2[i]) || (s1[i] && !s2[i]))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	if ((s1[i] < s2[i]) || (!s1[i] && s2[i]))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
