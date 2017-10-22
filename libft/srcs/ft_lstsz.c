/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 19:33:50 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/10 00:58:23 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsz(t_lst *ll)
{
	int		sz;
	t_lst	*beg;

	if (NULL == ll)
		return (0);
	beg = ll;
	sz = 0;
	while (true)
	{
		sz++;
		ll = ll->nxt;
		if (beg == ll)
			return (sz);
	}
}
