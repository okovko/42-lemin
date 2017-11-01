/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkcmp_right.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 22:30:55 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/31 18:36:55 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

int		linkcmp_right(char *link, char *id)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = *link;
	c2 = *id;
	while (c1 == c2 && c1 && !ISSPACE(c1))
	{
		c1 = (unsigned char)*++link;
		c2 = (unsigned char)*++id;
	}
	if ('\0' == c1 && ('\0' == c2 || ISSPACE(c2)))
		return (0);
	else
		return (-1);
}
