/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:38:42 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/08 15:38:42 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstnmax(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b), int sz)
{
	t_lst	*beg;
	t_lst	*max;

	if (NULL == ll || NULL == cmp || sz <= 0)
		return (NULL);
	beg = ll;
	max = ll;
	while (true)
	{
		if ((cmp(ll, max) > 0))
			max = ll;
		ll = ll->nxt;
		sz--;
		if (ll == beg || sz <= 0)
			return (max);
	}
	return (max);
}
