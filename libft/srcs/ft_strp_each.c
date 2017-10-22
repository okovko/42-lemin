/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strp_each.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 13:36:26 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 13:36:26 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_strp_each(char *ss, t_bool (*pp)(char))
{
	char	cc;

	if (NULL == ss || NULL == pp)
		return (true);
	while ((cc = *ss))
		if (false == pp(cc))
			return (false);
		else
			ss++;
	return (true);
}
