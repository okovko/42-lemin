/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ants.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 08:16:10 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 08:16:10 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

void	move_ants(t_farm *farm, t_lst *path)
{
	t_lst	**pos;
	int		ii;
	int		jj;

	pos = ft_walloc(sizeof(*pos) * farm->ants);
	ft_memzero(pos, sizeof(*pos) * farm->ants);
	ii = 0;
	while (ii < farm->ants)
	{
		jj = 0;
		while (jj <= farm->ants)
		{
			if (farm->start->id == (char *)pos[jj]->dat)
			{
				jj++;
				continue;
			}
			if (NULL == pos[jj])
				pos[jj] = path;
			ft_putstr("L");
			ft_putnbr(jj);
			ft_putstr("-");
			ft_putstr(path->dat);
			ft_putstr(" ");
			pos[jj] = pos[jj]->nxt;
			jj++;
		}
		ii++;
	}
}
