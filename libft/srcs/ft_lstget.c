/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 16:04:12 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 11:29:51 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstget(t_lst *ll, int ii)
{
	if (0 == ii)
		return (ll);
	while (0 > ii)
	{
		ll = ll->prv;
		ii++;
	}
	while (0 < ii)
	{
		ll = ll->nxt;
		ii--;
	}
	return (ll);
}
