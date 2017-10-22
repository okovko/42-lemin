/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 06:53:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 06:53:54 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

t_room		*add_room(t_input *in)
{
	t_room	*room;
	int		sz;
	char	*id;
	t_lst	*links_start;

	links_start = in->links;
	id = in->rooms->dat;
	sz = count_links(in->links, id);
	in->rooms = in->rooms->nxt;
	room = ft_walloc(sizeof(*room));
	room->sz = sz;
	room->id = id;
	room->links = add_links(in, id);
	in->links = links_start;
	return (room);
}
