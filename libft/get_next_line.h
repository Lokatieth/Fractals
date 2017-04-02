/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 16:22:12 by vbauguen          #+#    #+#             */
/*   Updated: 2016/02/18 13:10:47 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include "libft.h"

# define BUFF_SIZE 10
# define SIZE (BUFF_SIZE < 0 ? -BUFF_SIZE : BUFF_SIZE)

int		get_next_line(int const fd, char **line);
int		return_line(char **line, char **rest);

#endif
