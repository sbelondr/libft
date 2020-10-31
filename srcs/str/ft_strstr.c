/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:35:21 by sbelondr          #+#    #+#             */
/*   Updated: 2020/10/31 08:31:51 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	cnt;
	int	cnt_n;

	cnt = -1;
	if (!(*needle))
		return ((char*)haystack);
	while (haystack[++cnt])
	{
		cnt_n = 0;
		while (needle[cnt_n] && needle[cnt_n] == haystack[cnt + cnt_n])
			++cnt_n;
		if (!needle[cnt_n])
			return ((char*)haystack + cnt);
	}
	return (0);
}
