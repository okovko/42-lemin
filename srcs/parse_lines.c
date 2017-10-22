/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 00:03:16 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 03:37:08 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_lst	*parse_lines(void)
{
	char	*ss;
	t_lst	*lines;

	lines = NULL;
	while (get_next_line(0, &ss) > 0)
	{
		ft_putstr(ss);
		ft_putstr("\n");
		lines = ft_lstadd(&lines, ft_lstnode(ss, ft_strlen(ss)));
	}
	return (ft_lstsrev(&lines));
}
