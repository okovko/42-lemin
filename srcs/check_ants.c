/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 01:38:16 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/27 17:18:25 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool	check_ants(t_lst *lines)
{
	char	*ss;

	if (NULL == lines)
		return (false);
	ss = lines->dat;
	if (NULL == ss || !ISDIGIT(*ss))
		return (false);
	while (ISDIGIT(*ss))
		ss++;
	if ('\0' != *ss)
		return (false);
	return (true);
}
