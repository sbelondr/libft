/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 22:48:07 by sbelondr          #+#    #+#             */
/*   Updated: 2018/11/16 10:33:55 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	cnt_s2;
	int	cnt_s1;

	cnt_s1 = 0;
	cnt_s2 = 0;
	while (s1[cnt_s1])
		cnt_s1++;
	while (s2[cnt_s2])
		s1[cnt_s1++] = s2[cnt_s2++];
	s1[cnt_s1] = '\0';
	return (s1);
}
