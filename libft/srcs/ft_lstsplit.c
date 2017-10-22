/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 22:31:55 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 05:01:24 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsplit(t_lst *l1, t_lst *l2)
{
	t_lst	*tmp;

	tmp = l1->prv;
	l1->prv = l2->prv;
	l2->prv->nxt = l1;
	l2->prv = tmp;
	tmp->nxt = l2;
}
