/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_links.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 06:54:07 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/27 16:53:09 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

char		**add_links(t_input *in, char *id)
{
	char	*left;
	char	*right;
	char	**links;
	int		ii;
	int		sz;

	sz = count_links(in->links, id);
	links = ft_walloc(sizeof(*links) * sz);
	ii = 0;
	while (ii < sz)
	{
		left = in->links->dat;
		right = ft_strchr(in->links->dat, '-') + 1;
		if (0 == linkcmp(left, id))
			links[ii++] = right;
		else if (0 == linkcmp(right, id))
			links[ii++] = left;
		in->links = in->links->nxt;
	}
	return (links);
}
