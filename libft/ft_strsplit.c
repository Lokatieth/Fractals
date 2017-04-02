/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:49:08 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/11 18:06:24 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char		**end;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if ((end = (char**)malloc(sizeof(char*) * \
		(ft_get_number_of_words(s, c) + 1))) == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			end[j] = ft_get_next_word(s, c, &i);
			j++;
		}
		i++;
	}
	end[j] = NULL;
	return (end);
}
