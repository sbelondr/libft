/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 23:32:46 by sbelondr          #+#    #+#             */
/*   Updated: 2018/11/23 16:58:51 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		cnt;
	char	*final;

	cnt = -1;
	final = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (final == NULL)
		return (0);
	ft_strcpy(final, s1);
	return (final);
}
