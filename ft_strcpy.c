/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 23:40:48 by sbelondr          #+#    #+#             */
/*   Updated: 2018/11/16 10:34:45 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	cpt;

	cpt = -1;
	while (src[++cpt])
		dst[cpt] = src[cpt];
	dst[cpt] = '\0';
	return (dst);
}
