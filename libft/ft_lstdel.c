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

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *prev;
	t_list *curr;

	prev = NULL;
	curr = *alst;
	while (curr != NULL)
	{
		if (prev)
			ft_lstdelone(&prev, del);
		prev = curr;
		curr = curr->next;
	}
	if (prev)
		ft_lstdelone(&prev, del);
	if (*alst)
		*alst = NULL;
}
