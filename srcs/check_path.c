/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:17:44 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/27 17:17:44 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool		check_path(t_lst *path)
{
	if (NULL == path)
	{
		ft_putstr("Error\n");
		return (false);
	}
	return (true);
}
