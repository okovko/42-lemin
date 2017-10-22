/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 23:15:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/09/22 17:43:57 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_itoa(int val)
{
	char	*ss;
	int		sz;
	int		tmp;

	sz = ft_nbrlen(val);
	if (NULL == (ss = malloc(sz + 1)))
		return (NULL);
	if (val < 0)
		ss[0] = '-';
	if (val == 0)
		ss[0] = '0';
	ss[sz] = '\0';
	sz--;
	tmp = val;
	while (tmp)
	{
		ss[sz] = '0' + ABS(tmp % 10);
		tmp /= 10;
		sz--;
	}
	return (ss);
}
