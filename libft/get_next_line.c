/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 17:30:33 by vbauguen          #+#    #+#             */
/*   Updated: 2016/02/16 12:57:53 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_check_values(int ret, int fd)
{
	if (ret < 0 || fd < 0 || BUFF_SIZE <= 0 || fd > 256)
		return (-1);
	return (1);
}

int		return_line(char **line, char **rest)
{
	char		*tmp;

	*line = ft_strsub(*rest, 0, ft_strchr(*rest, '\n') - *rest);
	tmp = *rest;
	*rest = ft_strsub(*rest, ft_strlen(*line) + 1,
		ft_strlen(*rest) - ft_strlen(*line));
	free(tmp);
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	static char	*rest[256];
	char		buffer[SIZE + 1];
	int			ret;

	if (fd < 256 && fd >= 0 && !rest[fd])
		rest[fd] = ft_strnew(1);
	if (fd >= 0 && fd < 256 && ft_strchr(rest[fd], '\n'))
		return (return_line(line, &rest[fd]));
	while (fd >= 0 && fd < 256 && (ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		rest[fd] = ft_strjoinopt(rest[fd], buffer);
		if (ft_strchr(rest[fd], '\n'))
			return (return_line(line, &rest[fd]));
	}
	if (ft_check_values(ret, fd) == -1)
		return (-1);
	if (ft_strlen(rest[fd]) > 0)
	{
		*line = ft_strdup(rest[fd]);
		rest[fd] = NULL;
		return (1);
	}
	return (0);
}
