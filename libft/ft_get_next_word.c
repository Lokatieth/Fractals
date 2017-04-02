/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_word.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:04:36 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/11 18:03:31 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_get_next_word(char const *s, char c, int *i)
{
	int			j;
	char		*ret;

	j = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		(*i)++;
		j++;
	}
	if ((ret = (char*)malloc(sizeof(char) * (j + 1))) == NULL)
		return (NULL);
	*i = *i - j;
	j = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		ret[j] = s[*i];
		(*i)++;
		j++;
	}
	ret[j] = '\0';
	--(*i);
	return (ret);
}
