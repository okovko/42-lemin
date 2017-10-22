/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 00:03:59 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 00:03:59 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "libft.h"

t_lst	*parse_lines(void);
t_bool	parse_checked_input(t_lst **lines);
t_bool	check_input(t_lst *lines);
t_bool	check_rooms(t_lst *lines);
t_bool	check_ants(t_lst *lines);
t_bool	has_solution(t_lst *lines, type **solution);

#endif
