/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ants.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 08:16:10 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 10:47:27 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

void			move_ants(t_farm *farm, t_lst *path)
{
	int		ii;
	int		jj;

	path = path->nxt;
	ii = 0;
	while (ii < farm->ants)
	{
		jj = 0;
		while (jj < ft_lstsz(path) - 1)
		{
			ft_putstr("L");
			ft_putnbr(ii + 1);
			ft_putstr("-");
			ft_putstr(ft_lstget(path, jj)->dat);
			ft_putstr("\n");
			jj++;
		}
		ii++;
	}
}
