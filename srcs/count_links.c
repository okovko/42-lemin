/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_links.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 06:10:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 15:14:41 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

int			count_links(t_lst *links, char *id)
{
	int		ii;
	t_lst	*beg;

	beg = links;
	ii = 0;
	while (true)
	{
		if (true == is_link(links->dat)
			&& 0 == linkcmp(links->dat, id))
			ii++;
		links = links->nxt;
		if (beg == links)
			break ;
	}
	return (ii);
}
