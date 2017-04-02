/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:50:04 by vbauguen          #+#    #+#             */
/*   Updated: 2015/11/29 12:39:22 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *temp;

	temp = ft_strnew(len);
	temp = ft_memcpy(temp, src, len);
	dest = ft_memcpy(dest, temp, len);
	free(temp);
	temp = NULL;
	return (dest);
}
