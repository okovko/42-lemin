/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsrev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 23:29:10 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/11 23:45:44 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

t_lst	*ft_lstsrev(t_lst **ll)
{
	t_lst	*beg;
	t_lst	*cur;
	t_lst	*prv;
	t_lst	*nxt;

	if (NULL == ll || NULL == *ll)
		return (NULL);
	beg = *ll;
	cur = beg;
	while (cur)
	{
		prv = cur->prv;
		nxt = cur->nxt;
		cur->prv = nxt;
		cur->nxt = prv;
		cur = nxt;
		if (beg == cur)
			break ;
	}
	*ll = cur->nxt;
	return (*ll);
}
