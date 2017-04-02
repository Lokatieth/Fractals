/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:41:14 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/10 16:35:44 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;
	size_t	i;

	i = 0;
	new = (void*)malloc(sizeof(void) * (size));
	if (new == NULL)
		return (NULL);
	while (i < size)
	{
		ft_bzero(new, size);
		i++;
	}
	return (new);
}
