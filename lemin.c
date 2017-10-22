/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 23:51:45 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 10:01:37 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

t_room	*get_room(t_farm *farm, char *id)
{
	int		ii;

	ii = 0;
	while (ii < farm->sz)
	{
		if (0 == ft_strcmp(farm->rooms[ii]->id, id))
			return (farm->rooms[ii]);
		ii++;
	}
	return (NULL);
}

int		get_path_r(t_farm *farm, t_room *room, t_lst **path, int depth)
{
	int		ii;

	if (depth == 0)
		return (0);
	if (farm->end->id == room->id)
	{
		ft_lstadd(path, ft_lstnode(room->id, ft_strlen(room->id)));
		ft_lstsrev(path);
		return (1);
	}
	ii = 0;
	while (ii < room->sz)
	{
		if (1 == get_path_r(farm, get_room(farm,
											room->links[ii]), path, depth - 1))
		{
			ft_lstadd(path, ft_lstnode(room->id, ft_strlen(room->id)));
			return (1);
		}
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
	while (depth < 1000000)
	{
		if (1 == get_path_r(farm, farm->start, &path, depth))
			return (path);
		depth++;
	}
	return (NULL);
}


int		main(void)
{
	t_lst	*test_lines;
	t_lst	*lines;
	t_input	*in;
	t_farm	*farm;
	t_lst	*path;
	
	test_lines = NULL;
	ft_lstadd(&test_lines, ft_lstnode("1", 0));
	ft_lstadd(&test_lines, ft_lstnode("##start", 0));
	ft_lstadd(&test_lines, ft_lstnode("0", 0));
	ft_lstadd(&test_lines, ft_lstnode("1", 0));
	ft_lstadd(&test_lines, ft_lstnode("2", 0));
	ft_lstadd(&test_lines, ft_lstnode("##end", 0));
	ft_lstadd(&test_lines, ft_lstnode("3", 0));
	ft_lstadd(&test_lines, ft_lstnode("#0-1", 0));
	ft_lstadd(&test_lines, ft_lstnode("0-2", 0));
	ft_lstadd(&test_lines, ft_lstnode("#0-3", 0));
	ft_lstadd(&test_lines, ft_lstnode("1-2", 0));
	ft_lstadd(&test_lines, ft_lstnode("1-3", 0));
	ft_lstadd(&test_lines, ft_lstnode("2-3", 0));
	ft_lstsrev(&test_lines);
	lines = test_lines;
	//lines = parse_lines();
	if (false == check_lines(lines))
		exit(EXIT_FAILURE);
	in = process_input(lines);
	if (false == check_input(in))
		exit(EXIT_FAILURE);
	farm = process_farm(in);
	path = get_path(farm);
	move_ants(farm, path);
	exit(EXIT_SUCCESS);
}
