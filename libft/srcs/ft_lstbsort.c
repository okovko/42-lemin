/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 02:21:35 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 11:01:00 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_lst	*bsort(t_lst *itr, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*beg;
	t_lst	*min;
	t_lst	*max;
	t_bool	swap;

	beg = itr;
	min = ft_lstmin(itr, ft_lstcmp_lli);
	max = ft_lstmax(itr, ft_lstcmp_lli);
	swap = false;
	while (true)
	{
		if (cmp(itr, itr->nxt) > 0
			&& !(max == itr && min == itr->nxt))
		{
			swap = true;
			ft_lstadd(&itr, ft_lstpop(&itr->nxt));
		}
		itr = itr->nxt;
		if (itr == beg && false == swap)
			break ;
		else if (itr == beg)
			swap = false;
	}
	return (min);
}

t_lst			*ft_lstbsort(t_lst **ll, int (*cmp)(t_lst *a, t_lst *b))
{
	if (NULL == ll || NULL == *ll || NULL == cmp)
		return (NULL);
	if (*ll == (*ll)->nxt)
		return (*ll);
	return ((*ll = bsort(*ll, cmp)));
}
