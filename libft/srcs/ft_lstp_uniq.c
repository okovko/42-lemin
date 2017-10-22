/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstp_uniq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 18:08:39 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/11 23:46:50 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_lstp_uniq(t_lst *outer, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst		*beg;
	t_lst		*inner;

	if (NULL == outer || outer == outer->nxt)
		return (true);
	beg = outer;
	while (true)
	{
		inner = outer->nxt;
		while (true)
		{
			if (0 == cmp(inner, outer))
				return (false);
			inner = inner->nxt;
			if (outer == inner)
				break ;
		}
		outer = outer->nxt;
		if (beg == outer)
			break ;
	}
	return (true);
}
