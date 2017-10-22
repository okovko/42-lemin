/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaneri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:40:51 by mzaneri           #+#    #+#             */
/*   Updated: 2017/10/20 23:14:39 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "libft.h"

static char	*join_then_free(char *buf, char *store)
{
	char		*ret;

	ret = ft_strjoin(buf, store);
	ft_strdel(&buf);
	return (ret);
}

static char	*truncate_to_newline(char *buf)
{
	char		*finish;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (*(buf + i) && (*(buf + i) != '\n'))
		i++;
	finish = (char *)malloc(sizeof(char) * (i + 1));
	if (!finish)
		return (NULL);
	while (j < i)
	{
		*(finish + j) = *(buf + j);
		j++;
	}
	*(finish + j) = '\0';
	return (finish);
}

char		*norm_nonsense(char **buf)
{
	ft_strdel(buf);
	return (NULL);
}

static char	*copy_after_newline(char *buf)
{
	char		*temp;
	char		*finish;
	size_t		i;

	i = 0;
	if (!(temp = ft_strchr(buf, '\n')))
		return (norm_nonsense(&buf));
	temp++;
	while (*(temp + i))
		i++;
	finish = (char*)malloc(sizeof(char) * (i + 1));
	if (!finish)
	{
		ft_strdel(&buf);
		return (NULL);
	}
	i = 0;
	while (*(temp + i))
	{
		*(finish + i) = *(temp + i);
		i++;
	}
	*(finish + i) = '\0';
	ft_strdel(&buf);
	return (finish);
}

int			get_next_line(int const fd, char **line)
{
	static char	*fds_arry[1024];
	char		store[BUFF_SIZE + 1];
	int			val;

	if (fd < 0 || !line || read(fd, store, 0) < 0 || BUFF_SIZE < 1)
		return (-1);
	if (!fds_arry[fd % 1024])
		fds_arry[fd % 1024] = ft_strnew(1);
	val = 0;
	while (!(ft_strchr(fds_arry[fd % 1024], '\n')))
	{
		val = read(fd, store, BUFF_SIZE);
		if (val < 0)
			return (-1);
		store[val] = '\0';
		fds_arry[fd % 1024] = join_then_free(fds_arry[fd % 1024], store);
		if ((val == 0) && (*fds_arry[fd % 1024] == '\0'))
			return (0);
		if (val == 0)
			break ;
	}
	*line = truncate_to_newline(fds_arry[fd % 1024]);
	fds_arry[fd % 1024] = copy_after_newline(fds_arry[fd % 1024]);
	return (1);
}
