/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlgt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 16:07:01 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/10 01:06:49 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstlgt(t_lst *ll, t_lst *nod, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*beg;
	t_lst	*lgt;

	if (NULL == cmp)
		return (NULL);
	lgt = NULL;
	beg = ll;
	while (true)
	{
		if (cmp(ll, nod) > 0 && (NULL == lgt || cmp(ll, lgt) < 0))
			lgt = ll;
		ll = ll->nxt;
		if (beg == ll)
			break ;
	}
	return (lgt);
}
