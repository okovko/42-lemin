/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_rooms.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 06:07:29 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 06:07:29 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

int		count_rooms(t_lst *rooms)
{
	int		ii;
	t_lst	*beg;

	beg = rooms;
	ii = 0;
	while (true)
	{
		if (true == is_room(rooms->dat))
			ii++;
		rooms = rooms->nxt;
		if (beg == rooms)
			break ;
	}
	return (ii);
}
