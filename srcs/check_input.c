/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:39:00 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 01:39:00 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	check_input(t_lst *lines)
{
	char	*first_line;

	first_line = lines->dat;
	return (check_ants(first_line) && check_rooms(lines));
}
