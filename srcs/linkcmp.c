/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 15:45:33 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 15:45:33 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

int		linkcmp(char *link, char *id)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = *link;
	c2 = *id;
	while (c1 == c2 && c1 && '-' != c1 && !ISSPACE(c2))
	{
		c1 = (unsigned char)*++link;
		c2 = (unsigned char)*++id;
	}
	if ('-' == c1 && ISSPACE(c2))
		return (0);
	else
		return (-1);
}
