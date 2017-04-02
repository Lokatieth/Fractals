/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:47:10 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/10 17:03:35 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		j;
	int		i;
	char	*dst;

	dst = ft_strnew(ft_strlen(s));
	if (dst == NULL)
		return (NULL);
	dst = ft_strcpy(dst, s);
	if (dst == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (dst[i])
	{
		dst[i] = f(j, (unsigned char)s[i]);
		i++;
		j++;
	}
	return (dst);
}
