/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ants.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 08:16:10 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 15:46:32 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "lemin.h"

void			move_ants(t_farm *farm, t_lst *path)
{
	int		ii;
	int		jj;
	char	*ss;

	path = path->nxt;
	ii = 0;
	while (ii < farm->ants)
	{
		jj = 0;
		while (jj < ft_lstsz(path) - 1)
		{
			ss = ft_lstget(path, jj)->dat;
			ft_putstr("L");
			ft_putnbr(ii + 1);
			ft_putstr("-");
			while ('\0' != *ss && !ISSPACE(*ss))
			{
				ft_putchar(*ss);
				ss++;
			}
			ft_putstr("\n");
			jj++;
		}
		ii++;
	}
}
