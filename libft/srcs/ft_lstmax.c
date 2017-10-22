/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 19:45:56 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/08 15:38:35 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstmax(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*beg;
	t_lst	*max;

	if (NULL == ll || NULL == cmp)
		return (NULL);
	beg = ll;
	max = ll;
	while (true)
	{
		if ((cmp(ll, max) > 0))
			max = ll;
		ll = ll->nxt;
		if (ll == beg)
			return (max);
	}
	return (max);
}
