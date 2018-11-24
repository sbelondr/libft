/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:55:33 by sbelondr          #+#    #+#             */
/*   Updated: 2018/11/11 12:57:01 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;
	size_t	cnt;

	cnt = -1;
	str = (void*)malloc(size);
	if (str == NULL)
		return (0);
	ft_bzero(str, size);
	return (str);
}
