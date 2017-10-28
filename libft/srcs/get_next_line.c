/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:29:03 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/27 17:29:03 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

char	*realloc_line(char *old_buf, size_t size)
{
	char	*new_buf;

	if (!old_buf)
	{
		new_buf = ft_strnew(size);
		return (new_buf);
	}
	new_buf = ft_strnew(ft_strlen(old_buf) + size);
	ft_strcpy(new_buf, old_buf);
	ft_strdel(&old_buf);
	return (new_buf);
}

int		fill_line(char **line, char *buffer)
{
	char	*tmp;
	int		len;

	if ((tmp = ft_strchr(buffer, '\n')))
	{
		*line = realloc_line(*line, tmp - buffer);
		ft_strncat(*line, buffer, tmp - buffer);
		ft_memmove(buffer, tmp + 1, ft_strlen(tmp));
		return (1);
	}
	if ((len = ft_strlen(buffer)))
	{
		*line = realloc_line(*line, len);
		ft_strncat(*line, buffer, len);
		*buffer = '\0';
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char	*buffers[FD_MAX];
	int			n;

	if (fd < 0 || fd >= FD_MAX || !line || BUFF_SIZE < 1
		|| (!buffers[fd] && !(buffers[fd] = ft_strnew(BUFF_SIZE))))
		return (-1);
	*line = NULL;
	if (fill_line(line, buffers[fd]))
		return (1);
	while ((n = read(fd, buffers[fd], BUFF_SIZE)) > 0)
	{
		buffers[fd][n] = '\0';
		if (fill_line(line, buffers[fd]))
			return (1);
	}
	if (*line)
		return (1);
	ft_strdel(&buffers[fd]);
	if (n < 0)
		return (-1);
	return (0);
}
