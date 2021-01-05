/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <sbelondr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 18:00:09 by sbelondr          #+#    #+#             */
/*   Updated: 2021/01/05 14:28:24 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <check.h>
#include <stdlib.h>
#include <stdio.h>

START_TEST(test_num) {
  ck_assert_uint_eq(ft_atoi("2"), 2);
  ck_assert_uint_eq(ft_atoi("0"), 0);
  ck_assert_uint_eq(ft_atoi("25"), 25);
  ck_assert_uint_eq(ft_atoi("-123"), -123);
  printf(" [PASS] Test: atoi \n");

  ck_assert_str_eq(ft_itoa(2), "2");
  ck_assert_str_eq(ft_itoa(0), "0");
  ck_assert_str_eq(ft_itoa(123456789), "123456789");
  ck_assert_str_eq(ft_itoa(-123), "-123");
  printf(" [PASS] Test: itoa \n");

  ck_assert_uint_eq(ft_numlen(2), 1);
  ck_assert_uint_eq(ft_numlen(123456789), 9);
  ck_assert_uint_eq(ft_numlen(0), 1);
  ck_assert_uint_eq(ft_numlen(123), 3);
  ck_assert_uint_eq(ft_numlen(-123), 3);
  printf(" [PASS] Test: numlen \n");

  ck_assert_uint_eq(ft_sqrt(2, 2), 4);
  ck_assert_uint_eq(ft_sqrt(5, 2), 25);
  ck_assert_uint_eq(ft_sqrt(1, 2), 1);
  printf(" [PASS] Test: sqrt \n");

} END_TEST

Suite *num_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("num");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_num);
  suite_add_tcase(s, tc_core);

  return s;
}
