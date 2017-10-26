/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_farm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:50:20 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 15:10:05 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

t_farm		*process_farm(t_input *in)
{
	t_lst	*start;
	t_lst	*end;
	t_farm	*farm;
	int		ii;
	int		sz;

	start = ft_lstfind(in->rooms, "##start", strcmp_strict)->nxt;
	end = ft_lstfind(in->rooms, "##end", strcmp_strict)->nxt;
	farm = ft_walloc(sizeof(*farm));
	farm->ants = ft_atoi(in->ants->dat);
	sz = count_rooms(in->rooms);
	farm->sz = sz;
	farm->rooms = ft_walloc(sizeof(t_room) * sz);
	ii = 0;
	while (ii < sz)
	{
		while (true == is_pound(in->rooms->dat))
			in->rooms = in->rooms->nxt;
		farm->rooms[ii] = add_room(in);
		if (0 == ft_strcmp(start->dat, in->rooms->dat))
			farm->start = farm->rooms[ii];
		if (0 == ft_strcmp(end->dat, in->rooms->dat))
			farm->end = farm->rooms[ii];
		in->rooms = in->rooms->nxt;
		ii++;
	}
	return (farm);
}
