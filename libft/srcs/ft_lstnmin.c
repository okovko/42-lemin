/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:36:32 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/10 16:29:53 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstnmin(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b), int sz)
{
	t_lst	*beg;
	t_lst	*min;

	if (NULL == ll || NULL == cmp || sz <= 0)
		return (NULL);
	beg = ll;
	min = ll;
	while (true)
	{
		if ((cmp(ll, min) < 0))
			min = ll;
		ll = ll->nxt;
		sz--;
		if (ll == beg || sz <= 0)
			return (min);
	}
	return (min);
}
