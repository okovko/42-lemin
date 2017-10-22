/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rooms.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:36:43 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 01:36:43 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	is_room(char *ss)
{
	if ('\0' == *ss || NULL == ss)
		return (false);
	if (ISSPACE(*ss))
		return (false);
	while (!ISSPACE(*ss))
		ss++;
	if ('\0' == *ss)
		return (true);
	if (ISSPACE(*ss) && ISSPACE(*(ss + 1)))
		return (false);
	while (!ISSPACE(*ss))
		ss++;
	if ('\0' == *ss || (ISSPACE(*ss) && ISSPACE(*(ss + 1))))
		return (false);
	while (!ISSPACE(*ss))
		ss++;
	if ('\0' != *ss)
		return (false);
	return (true);
}

t_bool	check_rooms(t_lst *lines)
{
	t_lst	*start;
	t_lst	*end;
	t_lst	*room;

	start = ft_lstfind(lines, "##start", ft_strcmp);
	end = ft_lstfind(lines, "##end", ft_strcmp);
	if (NULL == start || NULL == end)
		return (false);
	start = start->nxt;
	end = end->nxt;
	return (is_room(start->dat) && is_room(end->dat));
}
