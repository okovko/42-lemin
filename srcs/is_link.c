/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 02:16:12 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 02:16:12 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	is_link(char *ss)
{
	if (NULL == ss || !ISDIGIT(*ss))
		return (false);
	while (ISDIGIT(*ss))
		ss++;
	if ('-' != *ss)
		return (false);
	ss++;
	while (ISDIGIT(*ss))
		ss++;
	if ('\0' != *ss)
		return (false);
	return (true);
}
