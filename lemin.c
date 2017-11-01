/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 23:51:45 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/31 18:30:28 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

t_bool	already_in_path(t_lst *path, char *id)
{
	t_lst	*beg;

	if (NULL == path)
		return (false);
	beg = path;
	while (true)
	{
		if (0 == strcmp_strict(path->dat, id))
			return (true);
		path = path->nxt;
		if (beg == path)
			break ;
	}
	return (false);
}

int		get_path_r(t_farm *farm, t_room *room, t_lst **path, int depth)
{
	int		ii;

	if (depth == 0)
		return (0);
	if (true == already_in_path(*path, room->id))
		return (0);
	if (farm->end->id == room->id)
	{
		ft_lstadd(path, ft_lstnode(room->id, ft_strlen(room->id)));
		return (1);
	}
	ii = 0;
	while (ii < room->sz)
	{
		ft_lstadd(path, ft_lstnode(room->id, ft_strlen(room->id)));
		if (1 == get_path_r(farm,
							get_room(farm, room, room->links[ii]),
							path,
							depth - 1))
			return (1);
		free(ft_lstpop(path));
		ii++;
	}
	return (0);
}

t_lst	*get_path(t_farm *farm)
{
	int		depth;
	t_lst	*path;

	path = NULL;
	depth = 2;
	while (depth <= farm->sz)
	{
		if (1 == get_path_r(farm, farm->start, &path, depth))
			return (ft_lstsrev(&path));
		depth++;
	}
	return (NULL);
}

void	free_everything(t_lst *lines, t_input *in,
						t_farm *farm, t_lst *path)
{
	int		ii;

	(void)lines;
	ft_lstnfree(&in->ants, 1);
	ft_lstnfree(&in->rooms, 1);
	ft_lstnfree(&in->links, 1);
	ii = 0;
	while (ii < farm->sz)
	{
		free(farm->rooms[ii]->links);
		free(farm->rooms[ii]);
		ii++;
	}
	free(farm->rooms);
	free(farm);
	ft_lstnfree(&path, 0);
}

int		main(void)
{
	t_lst	*lines;
	t_input	*in;
	t_farm	*farm;
	t_lst	*path;

	lines = parse_lines();
	if (false == check_lines(lines))
		exit(EXIT_FAILURE);
	in = process_input(lines);
	if (false == check_input(in))
		exit(EXIT_FAILURE);
	farm = process_farm(in);
	path = get_path(farm);
	if (false == check_path(path))
		exit(EXIT_FAILURE);
	move_ants(farm, path);
	free_everything(lines, in, farm, path);
	exit(EXIT_SUCCESS);
}
