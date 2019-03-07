/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 17:33:13 by sbelondr          #+#    #+#             */
/*   Updated: 2019/03/05 21:38:29 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void	ft_display(char dst[BUFF_S], t_printf **lst)
{
	if ((*lst)->color > 0)
		ft_display_color(dst, &(*lst));
	else
	{
		(*lst)->len += ft_strlen(dst);
		ft_putstr_fd(dst, (*lst)->fd);
	}
}

void	ft_display_color(char dst[BUFF_S], t_printf **lst)
{
	char	*src;
	char	*tmp;

	if ((*lst)->color == 1)
		src = ft_strjoin(CL_RED, dst);
	else if ((*lst)->color == 2)
		src = ft_strjoin(CL_GREEN, dst);
	else if ((*lst)->color == 3)
		src = ft_strjoin(CL_BLUE, dst);
	else
		src = ft_strdup(dst);
	tmp = ft_strjoin(dst, CL_RESET);
	(*lst)->len += ft_strlen(dst);
	ft_putstr_fd(tmp, (*lst)->fd);
	ft_strdel(&src);
	ft_strdel(&tmp);
}
