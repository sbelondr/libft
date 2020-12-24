/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrn_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 11:17:55 by sbelondr          #+#    #+#             */
/*   Updated: 2020/12/23 23:45:00 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chrn_index(char *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return (i);
	return (-1);
}
