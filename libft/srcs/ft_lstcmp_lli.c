/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp_lli.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:21:29 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/08 20:06:58 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstcmp_lli(t_lst *a, t_lst *b)
{
	long long	a_val;
	long long	b_val;

	if (NULL == a)
		return (-(*(int *)b->dat));
	if (NULL == b)
		return (*(int *)a->dat);
	if (NULL == a && NULL == b)
		return (0);
	a_val = *(long long*)a->dat;
	b_val = *(long long*)b->dat;
	return (a_val - b_val);
}
