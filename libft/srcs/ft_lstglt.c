/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstglt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 16:18:47 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/08 20:37:18 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstglt(t_lst *ll, t_lst *nod, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*beg;
	t_lst	*glt;

	if (NULL == cmp)
		return (NULL);
	glt = NULL;
	beg = ll;
	while (true)
	{
		if (cmp(ll, nod) < 0 && (NULL == glt || cmp(ll, glt) > 0))
			glt = ll;
		ll = ll->nxt;
		if (beg == ll)
			break ;
	}
	return (glt);
}
