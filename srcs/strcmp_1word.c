/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_1word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 04:12:32 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/26 15:29:44 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lemin.h"

int		strcmp_1word(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	if (NULL == s1 || NULL == s2)
		return (-1);
	c1 = *s1;
	c2 = *s2;
	while (c1 == c2 && c1 && !ISSPACE(c1) && !ISSPACE(c2))
	{
		c1 = (unsigned char)*++s1;
		c2 = (unsigned char)*++s2;
	}
	return (c1 - c2);
}
