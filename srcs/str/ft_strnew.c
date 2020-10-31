/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:05:45 by sbelondr          #+#    #+#             */
/*   Updated: 2020/10/31 08:30:08 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	cnt;

	cnt = -1;
	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (++cnt <= size)
		str[cnt] = 0;
	return (str);
}
