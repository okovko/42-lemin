/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/05 23:30:59 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, int sz)
{
	char	*beg;
	int		ii;

	beg = dst;
	ii = 0;
	while (src[ii] && ii < sz)
	{
		dst[ii] = src[ii];
		ii++;
	}
	while (ii < sz)
	{
		dst[ii] = '\0';
		ii++;
	}
	return (beg);
}
