/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_checked_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:44:29 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 01:44:29 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	parse_checked_input(t_lst **lines)
{
	*lines = parse_lines();
	if (false == check_input(*lines))
	{
		ft_lstnfree(lines, 1);
		ft_putstr("Error\n");
		return (false);
	}
	return (true);
}
