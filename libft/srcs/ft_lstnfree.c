/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 23:10:23 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 13:06:35 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_lst	*ft_lstnfree(t_lst **ll, int dpth)
{
	t_lst	*tmp;
	t_lst	*beg;

	if (NULL == ll)
		return (NULL);
	beg = *ll;
	while (NULL != beg)
	{
		if (dpth > 1)
			ft_lstnfree((t_lst **)&((*ll)->dat), dpth - 1);
		else if (dpth == 1)
			free((*ll)->dat);
		tmp = *ll;
		*ll = (*ll)->nxt;
		free(tmp);
		if (*ll == beg)
			break ;
	}
	*ll = NULL;
	return (NULL);
}
