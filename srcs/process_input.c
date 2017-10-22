/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 04:57:12 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 09:44:46 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

t_input		*process_input(t_lst *lines)
{
	t_lst		*beg;
	t_input		*in;

	beg = lines->nxt;
	in = malloc(sizeof(*in));
	in->ants = ft_lstpop(&lines);
	while (is_room(lines->dat) || is_pound(lines->dat))
		lines = lines->nxt;
	if (beg == lines)
	{
		in->rooms = beg;
		in->links = NULL;
	}
	ft_lstsplit(beg, lines);
	in->rooms = beg;
	in->links = lines;
	return (in);
}
