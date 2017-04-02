/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:20:50 by vbauguen          #+#    #+#             */
/*   Updated: 2015/11/29 15:33:13 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*dst;

	dst = ft_strnew(ft_strlen(str));
	j = 0;
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		dst[j] = str[i];
		i--;
		j++;
	}
	return (dst);
}
