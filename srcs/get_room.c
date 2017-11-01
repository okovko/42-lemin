/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:24:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/31 18:37:42 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_room	*get_room(t_farm *farm, t_room *room, char *link)
{
	int		ii;
	char	*id;

	(void)room;
	ii = 0;
	while (ii < farm->sz)
	{
		id = farm->rooms[ii]->id;
		if (0 == linkcmp_left(link, id) || 0 == linkcmp_right(link, id))
			return (farm->rooms[ii]);
		ii++;
	}
	return (NULL);
}
