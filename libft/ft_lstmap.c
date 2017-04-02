/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 17:25:57 by vbauguen          #+#    #+#             */
/*   Updated: 2015/12/03 17:25:59 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *ret_beg;
	t_list *ret_head;

	new_lst = ft_lstdup(lst);
	if (!new_lst)
		return (NULL);
	ret_beg = (*f)(new_lst);
	ret_head = ret_beg;
	new_lst = new_lst->next;
	while (new_lst)
	{
		ret_head->next = (*f)(new_lst);
		new_lst = new_lst->next;
		ret_head = ret_head->next;
	}
	ret_head->next = NULL;
	return (ret_beg);
}
