/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <sbelondr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 10:47:11 by sbelondr          #+#    #+#             */
/*   Updated: 2021/01/05 14:18:24 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

#include "libft.h"
#include <check.h>
#include <stdlib.h>
#include <stdio.h>

Suite	*array_suite(void);
Suite	*num_suite(void);
Suite	*char_suite(void);

#endif
