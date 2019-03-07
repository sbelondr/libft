/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:07:39 by sbelondr          #+#    #+#             */
/*   Updated: 2019/03/07 09:49:23 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_ls.h"

void	error_option(char c)
{
	ft_dprintf(2, "ls: illegal option -- %c\n", c);
	ft_dprintf(2, "usage: ls [-Ralrt] [file ...]\n");
	exit(1);
}

void	error_see(void)
{
	ft_dprintf(2, "%s\n", strerror(errno));
}

void	error_permissions(t_read *r)
{
	ft_dprintf(2, "ls: %s: Permission denied\n", r->name);
}

void	error_rep(char *str)
{
	int	verif;

	verif = 0;
	if (!str || str[0] == '\0')
	{
		str = ft_strdup("fts_open");
		verif = 1;
	}
	ft_dprintf(2, "ls: %s: %s\n", str, strerror(errno));
	if (verif == 1)
	{
		ft_strdel(&str);
		exit(1);
	}
}
