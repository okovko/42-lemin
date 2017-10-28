/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:24:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/27 17:24:54 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
