/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstp_each.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 18:10:25 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/11 23:46:36 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_lstp_each(t_lst *ll, t_bool (*pred)(t_lst *nod))
{
	t_lst	*beg;

	if (NULL == ll)
		return (true);
	beg = ll;
	while (true)
	{
		if (false == pred(ll))
			return (false);
		ll = ll->nxt;
		if (beg == ll)
			break ;
	}
	return (true);
}
