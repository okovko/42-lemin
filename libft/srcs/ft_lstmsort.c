/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 22:16:39 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 11:00:32 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_lst	*msort(t_lst *itr, int (*cmp)(t_lst *a, t_lst *b), int sz)
{
	int		l1_sz;
	int		l2_sz;
	t_lst	*l1;
	t_lst	*l2;

	if (sz <= 1)
		return (itr);
	l1_sz = sz / 2;
	l2_sz = sz - l1_sz;
	l1 = itr;
	l2 = ft_lstget(itr, l1_sz);
	ft_lstsplit(l1, l2);
	msort(l1, cmp, l1_sz);
	msort(l2, cmp, l2_sz);
	return (ft_lstmerge(&l1, &l2, cmp));
}

t_lst			*ft_lstmsort(t_lst **ll, int (*cmp)(t_lst *a, t_lst *b))
{
	(void)"I don't work if the values are not unique, debug later";
	if (NULL == ll || NULL == *ll || NULL == cmp)
		return (NULL);
	if (*ll == (*ll)->nxt)
		return (*ll);
	return ((*ll = msort(*ll, cmp, ft_lstsz(*ll))));
}
