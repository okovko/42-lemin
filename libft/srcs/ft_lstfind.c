/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 00:46:15 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 01:00:46 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst		*ft_lstfind(t_lst *ll, char *qry,
						int (*cmp)(char *, char *))
{
	t_lst	*itr;

	if (NULL == ll || NULL == qry || NULL == cmp)
		return (NULL);
	itr = ll;
	while (true)
	{
		if (0 == cmp(qry, itr->dat))
			return (itr);
		itr = itr->nxt;
		if (ll == itr)
			break ;
	}
	return (NULL);
}
