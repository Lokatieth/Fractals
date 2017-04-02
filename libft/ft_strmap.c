/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:59:54 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/10 17:09:53 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	int		i;
	char	*dst;

	dst = ft_strnew(ft_strlen(s));
	if (dst == NULL)
		return (NULL);
	dst = ft_strcpy(dst, s);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (dst[i])
	{
		dst[i] = f((unsigned char)s[i]);
		i++;
	}
	return (dst);
}
