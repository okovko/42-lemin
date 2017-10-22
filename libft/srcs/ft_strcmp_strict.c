/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_strict.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 04:49:30 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 04:49:30 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp_strict(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = *s1;
	c2 = *s2;
	while (c1 == c2 && c1)
	{
		c1 = (unsigned char)*++s1;
		c2 = (unsigned char)*++s2;
	}
	return (c1 - c2);
}
