/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_start_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 04:47:01 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 04:47:01 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	check_start_end(t_lst *lines)
{
	t_lst	*start;
	t_lst	*end;

	start = ft_lstfind(lines, "##start", strcmp_strict);
	end = ft_lstfind(lines, "##end", strcmp_strict);
	if (NULL == start
		|| NULL == end
		|| start != ft_lstfind(start->nxt, start->dat, strcmp_strict)
		|| end != ft_lstfind(end->nxt, end->dat, strcmp_strict))
		return (false);
	start = start->nxt;
	end = end->nxt;
	return (is_room(start->dat) && is_room(end->dat));
}
