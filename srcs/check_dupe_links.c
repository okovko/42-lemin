/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupe_links.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 03:33:47 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 11:42:26 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool		check_dupe_links(t_lst *links)
{
	t_lst	*beg;

	beg = links;
	while (true)
	{
		if (false == is_link(links->dat))
		{
			links = links->nxt;
			if (beg == links)
				break ;
			continue ;
		}
		if (links != ft_lstfind(links->nxt, links->dat, strcmp_strict))
			return (false);
		links = links->nxt;
		if (beg == links)
			break ;
	}
	return (true);
}
