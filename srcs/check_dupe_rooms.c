/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupe_rooms.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 02:05:08 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 15:31:15 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool		check_dupe_rooms(t_lst *rooms)
{
	t_lst	*beg;

	beg = rooms;
	while (true)
	{
		if (false == is_room(rooms->dat))
		{
			rooms = rooms->nxt;
			if (beg == rooms)
				break ;
			continue ;
		}
		if (rooms != ft_lstfind(rooms->nxt, rooms->dat, strcmp_1word))
			return (false);
		rooms = rooms->nxt;
		if (beg == rooms)
			break ;
	}
	return (true);
}
