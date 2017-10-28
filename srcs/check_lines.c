/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:39:00 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/27 17:32:43 by olkovale         ###   ########.fr       */
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
