/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 02:16:12 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 15:16:04 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	is_link(char *ss)
{
	if ('#' == *ss)
		return (false);
	if (ISSPACE(*ss))
		return (false);
	while ('\0' != *ss && !ISSPACE(*ss) && '-' != *ss)
		ss++;
	if ('-' != *ss)
		return (false);
	ss++;
	while ('\0' != *ss && !ISSPACE(*ss))
		ss++;
	if ('\0' != *ss)
		return (false);
	return (true);
}
