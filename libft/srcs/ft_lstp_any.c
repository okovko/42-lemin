/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstp_any.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:06:25 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 01:06:25 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_lstp_any(t_lst *ll, t_bool (*pp)(t_lst *))
{
	t_lst	*itr;

	if (NULL == ll || NULL == pp)
		return (true);
	itr = ll;
	while (true)
	{
		if (true == pp(itr))
			return (true);
		else
			itr = itr->nxt;
		if (ll == itr)
			break ;
	}
}
