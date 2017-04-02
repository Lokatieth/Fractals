/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinopt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 23:35:37 by vbauguen          #+#    #+#             */
/*   Updated: 2016/02/11 15:49:35 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinopt(char *s1, char *s2)
{
	char *tmp1;
	char *tmp2;

	tmp1 = s1;
	tmp2 = s2;
	s1 = ft_strjoin(tmp1, tmp2);
	free(tmp1);
	return (s1);
}
