/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 20:34:42 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/08 20:34:45 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *src)
{
	t_list *curr;
	t_list *beg_new_lst;

	if (!src)
		return (NULL);
	beg_new_lst = ft_lstnew(src->content, src->content_size);
	curr = beg_new_lst;
	src = src->next;
	while (src)
	{
		curr->next = ft_lstnew(src->content, src->content_size);
		curr = curr->next;
		src = src->next;
	}
	return (beg_new_lst);
}
