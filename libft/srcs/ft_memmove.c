/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/27 17:41:18 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	char	*csrc;
	char	*cdst;
	int		ii;

	ii = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	if (csrc < cdst)
		while (len--)
			*(cdst + len) = *(csrc + len);
	else
		while (ii < len)
		{
			*(cdst + ii) = *(csrc + ii);
			ii++;
		}
	return (dst);
}
