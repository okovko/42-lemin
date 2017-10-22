/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapnget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:10:12 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:45:52 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_map_kv	*ft_mapnget(t_map *mp, void *key,
						int (*keycmp)(void *, void *, int), int sz)
{
	t_map_kv	*iter;
	t_map_kv	*end;

	if (NULL == mp || NULL == key)
		return (NULL);
	iter = mp->kvs;
	end = iter + mp->sz;
	while (iter < end)
	{
		if (0 == keycmp(key, iter->key, sz))
			return (iter);
		iter++;
	}
	return (NULL);
}
