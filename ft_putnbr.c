/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 22:30:43 by sbelondr          #+#    #+#             */
/*   Updated: 2018/11/11 12:10:03 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	char	c;
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 0)
	{
		if (nbr / 10 != 0)
			ft_putnbr(nbr / 10);
		c = (nbr % 10) + '0';
		ft_putchar(c);
	}
	if (nbr == 0)
		ft_putchar('0');
}
