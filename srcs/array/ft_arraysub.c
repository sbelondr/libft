/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraysub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 10:07:10 by sbelondr          #+#    #+#             */
/*   Updated: 2020/10/31 08:36:42 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arraysub(char **src, int start, int len)
{
	char	**dst;
	int		i;

	if (!src)
		return (NULL);
	i = -1;
	if (!(dst = (char**)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
  --start;
	while (++i < len && src[++start])
		dst[i] = ft_strdup(src[start]);
	dst[i] = NULL;
	return (dst);
}
