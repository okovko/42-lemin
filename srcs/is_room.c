/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_room.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:58:27 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/27 16:52:30 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	is_room(char *ss)
{
	if ('\0' == *ss || '#' == *ss)
		return (false);
	if (ISSPACE(*ss))
		return (false);
	while ('\0' != *ss && !ISSPACE(*ss) && '-' != *ss)
		ss++;
	if ('\0' == *ss)
		return (true);
	if (ISSPACE(*ss))
		ss++;
	if ('\0' == *ss || ISSPACE(*ss))
		return (false);
	while ('\0' != *ss && !ISSPACE(*ss))
		ss++;
	if ('\0' == *ss)
		return (false);
	if (ISSPACE(*ss))
		ss++;
	if ('\0' == *ss || ISSPACE(*ss))
		return (false);
	while ('\0' != *ss && !ISSPACE(*ss))
		ss++;
	if ('\0' != *ss)
		return (false);
	return (true);
}
