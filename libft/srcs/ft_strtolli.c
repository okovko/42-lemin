/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolli.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:52:35 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/05 17:52:35 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_strtolli(const char *ss, char **edg)
{
	char			cc;
	long long		neg_num;
	t_bool			neg;

	while ((cc = *ss) && ISSPACE(cc))
		ss++;
	neg = cc == '-';
	ss += cc == '-' || cc == '+';
	neg_num = 0;
	while ((cc = *ss) && ISDIGIT(cc))
	{
		neg_num = neg_num * 10 - cc + '0';
		ss++;
	}
	*edg = (char *)ss;
	return (neg ? neg_num : -neg_num);
}
