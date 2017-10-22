/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 19:50:04 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/08 15:36:14 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstmin(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*beg;
	t_lst	*min;

	if (NULL == ll || NULL == cmp)
		return (NULL);
	beg = ll;
	min = ll;
	while (true)
	{
		if ((cmp(ll, min) < 0))
			min = ll;
		ll = ll->nxt;
		if (ll == beg)
			return (min);
	}
	return (min);
}
