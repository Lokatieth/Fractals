/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:24:00 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/10 17:02:21 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char					*newstr;
	unsigned long int		i;

	i = 0;
	newstr = (char*)malloc(sizeof(char) * (size + 1));
	if (newstr == NULL)
		return (NULL);
	while (newstr[i])
	{
		newstr[i] = '\0';
		i++;
	}
	return (newstr);
}
