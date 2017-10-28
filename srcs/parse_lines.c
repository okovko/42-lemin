/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 00:03:16 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 15:58:14 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#include "libft.h"
#include "lemin.h"

t_lst	*parse_lines(void)
{
	int			fd;
	char		*ss;
	t_lst		*lines;

	fd = open("1.map", O_RDONLY);
	lines = NULL;
	while (get_next_line(fd, &ss) > 0)
	{
		ft_putstr(ss);
		ft_putstr("\n");
		if ('#' != *ss || 0 == strcmp_strict("##start", ss)
			|| 0 == strcmp_strict("##end", ss))
			lines = ft_lstadd(&lines, ft_lstnode(ss, ft_strlen(ss)));
	}
	return (ft_lstsrev(&lines));
}
