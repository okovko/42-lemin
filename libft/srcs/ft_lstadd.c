/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:03 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 11:01:14 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstadd(t_lst **l1, t_lst *l2)
{
	t_lst	*tmp;

	if (NULL == l1 && NULL == l2)
		return (NULL);
	if (NULL == l1 && NULL != l2)
		return (l2);
	if (NULL == l2)
		return (*l1);
	if (NULL == *l1)
		return ((*l1 = l2));
	l2->prv->nxt = *l1;
	(*l1)->prv->nxt = l2;
	tmp = l2->prv;
	l2->prv = (*l1)->prv;
	(*l1)->prv = tmp;
	*l1 = l2;
	return (*l1);
}
