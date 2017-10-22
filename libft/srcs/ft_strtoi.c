/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:37:51 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:59:45 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strtoi(const char *ss, char **edg)
{
	char	cc;
	int		neg_num;
	t_bool	neg;
	t_bool	dig;

	while ((cc = *ss) && ISSPACE(cc))
		ss++;
	neg = cc == '-';
	ss += cc == '-' || cc == '+';
	neg_num = 0;
	cc = *ss;
	dig = ISDIGIT(cc);
	while ((cc = *ss) && ISDIGIT(cc))
	{
		neg_num = neg_num * 10 - cc + '0';
		ss++;
	}
	if (dig)
		*edg = (char *)ss;
	return (neg ? neg_num : -neg_num);
}
