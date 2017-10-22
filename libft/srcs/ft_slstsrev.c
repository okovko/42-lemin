/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slstsrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 22:48:40 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/05 22:48:40 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_slstsrev(t_lst **ll)
{
	t_lst	*prv;
	t_lst	*cur;
	t_lst	*nxt;

	if (NULL == ll)
		return (NULL);
	prv = NULL;
	cur = *ll;
	while (cur)
	{
		nxt = cur->nxt;
		cur->nxt = prv;
		prv = cur;
		cur = nxt;
	}
	*ll = prv;
	return (*ll);
}
