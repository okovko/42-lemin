/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstp_rot_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:24:40 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/11 20:16:18 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_lstp_rot_sorted(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b))
{
	return (ft_lstp_sorted(ft_lstmin(ll, cmp), cmp));
}
