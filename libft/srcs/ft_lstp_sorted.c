/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstp_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 16:55:20 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:51:55 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_lstp_sorted(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*beg;

	beg = ll;
	while (true)
	{
		if (cmp(ll, ll->nxt) > 0)
			return (false);
		ll = ll->nxt;
		if (beg == ll->nxt)
			break ;
	}
	return (true);
}
