/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_links.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 06:10:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 06:10:54 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

static int	linkcmp(char *link, char *id)
{
	if (0 == ft_strcmp(id, link))
		return (0);
	if (0 == ft_strcmp(id, ft_strchr(link, '-') + 1))
		return (0);
	return (-1);
}

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
