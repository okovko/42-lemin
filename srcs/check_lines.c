/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:39:00 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 04:29:54 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	check_lines(t_lst *lines)
{
	if (false == check_ants(lines)
		|| false == check_start_end(lines))
	{
		ft_lstnfree(&lines, 1);
		ft_putstr("Error\n");
		return (false);
	}
	return (true);
}
