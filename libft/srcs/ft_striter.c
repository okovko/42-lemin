/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:26:12 by olkovale          #+#    #+#             */
/*   Updated: 2017/09/06 15:26:12 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stritr(char *ss, void (*ff)(char *))
{
	if (NULL == ss || NULL == ff)
		return ;
	while (*ss)
		ff(ss++);
}
