/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <sbelondr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 10:48:57 by sbelondr          #+#    #+#             */
/*   Updated: 2020/12/25 08:58:27 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"
#include <strings.h>

START_TEST(test_char) {

	ck_assert_uint_eq(ft_isalnum('2'), 1);
	ck_assert_uint_eq(ft_isalnum('a'), 1);
	ck_assert_uint_eq(ft_isalnum('A'), 1);
	ck_assert_uint_eq(ft_isalnum('-'), 0);
	printf(" [PASS] Test: isalnum \n");

	ck_assert_uint_eq(ft_isalpha('H'), 1);
	ck_assert_uint_eq(ft_isalpha('a'), 1);
	ck_assert_uint_eq(ft_isalpha('A'), 1);
	ck_assert_uint_eq(ft_isalpha('2'), 0);
	printf(" [PASS] Test: isalpha \n");

	ck_assert_uint_eq(ft_isdigit('2'), 1);
	ck_assert_uint_eq(ft_isdigit('0'), 1);
	ck_assert_uint_eq(ft_isdigit('9'), 1);
	ck_assert_uint_eq(ft_isdigit('a'), 0);
	printf(" [PASS] Test: isdigit \n");

	ck_assert_uint_eq(ft_isprint(65), 1);
	ck_assert_uint_eq(ft_isprint(126), 1);
	ck_assert_uint_eq(ft_isprint(32), 1);
	ck_assert_uint_eq(ft_isprint(2), 0);
	printf(" [PASS] Test: isprint \n");

	ck_assert_uint_eq(ft_isspace(' '), 1);
	ck_assert_uint_eq(ft_isspace('\t'), 1);
	ck_assert_uint_eq(ft_isspace('\v'), 1);
	ck_assert_uint_eq(ft_isspace('\f'), 1);
	ck_assert_uint_eq(ft_isspace('\r'), 1);
	ck_assert_uint_eq(ft_isspace(2), 0);
	printf(" [PASS] Test: isspace \n");

	ck_assert_uint_eq(ft_isascii('2'), 1);
	ck_assert_uint_eq(ft_isascii('a'), 1);
	ck_assert_uint_eq(ft_isascii('A'), 1);
	ck_assert_uint_eq(ft_isascii('-'), 1);
	ck_assert_uint_eq(ft_isascii(404), 0);
	printf(" [PASS] Test: isascii \n");

	ck_assert_uint_eq(ft_isblank(' '), 1);
	ck_assert_uint_eq(ft_isblank('\t'), 1);
	ck_assert_uint_eq(ft_isblank('\r'), 0);
	printf(" [PASS] Test: isblank \n");

	ck_assert_uint_eq(ft_tolower('C'), 'c');
	ck_assert_uint_eq(ft_tolower('a'), 'a');
	ck_assert_uint_eq(ft_tolower('-'), '-');
	printf(" [PASS] Test: tolower \n");

	ck_assert_uint_eq(ft_toupper('C'), 'C');
	ck_assert_uint_eq(ft_toupper('a'), 'A');
	ck_assert_uint_eq(ft_toupper('-'), '-');
	printf(" [PASS] Test: toupper \n");

} END_TEST

Suite *char_suite(void) {
	Suite *s;
	TCase *tc_core;

	s = suite_create("char");
	tc_core = tcase_create("Core");

	tcase_add_test(tc_core, test_char);
	suite_add_tcase(s, tc_core);

	return s;
}
