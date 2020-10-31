/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:25:44 by sbelondr          #+#    #+#             */
/*   Updated: 2020/10/31 08:31:01 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	cnt;
	int	last;

	last = -1;
	cnt = -1;
	while (s[++cnt])
		if (s[cnt] == c)
			last = cnt;
	if (last != -1)
		return ((char*)s + last);
	if (!c)
		return ((char*)s + cnt);
	return (0);
}
