/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strp_any.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 15:35:55 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 15:35:55 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_strp_any(char *ss, t_bool (*pp)(char))
{
	char	cc;

	if (NULL == ss || NULL == pp)
		return (true);
	while ((cc = *ss))
		if (true == pp(cc))
			return (true);
		else
			ss++;
	return (false);
}
