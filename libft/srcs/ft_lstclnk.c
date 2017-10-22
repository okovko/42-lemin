/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclnk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 22:22:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/06 16:41:42 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstclnk(t_lst *ll)
{
	t_lst	*end;

	if (NULL == ll)
		return (NULL);
	end = ll;
	while (end->nxt)
		end = end->nxt;
	end->nxt = ll;
	ll->prv = end;
	return (ll);
}
