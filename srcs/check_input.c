/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 05:36:36 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 16:17:37 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

t_bool		check_input(t_input *in)
{
	if (false == check_dupe_rooms(in->rooms)
		|| false == check_dupe_links(in->links))
	{
		ft_lstnfree(&in->ants, 1);
		ft_lstnfree(&in->rooms, 1);
		ft_lstnfree(&in->links, 1);
		ft_putstr("Error\n");
		return (false);
	}
	return (true);
}
