/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <sbelondr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 10:48:57 by sbelondr          #+#    #+#             */
/*   Updated: 2020/12/25 08:34:26 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"
#include <strings.h>

char	**fill_arr(void)
{
	char	**arr = (char**)malloc(sizeof(char*) * 6);

	arr[0] = strdup("coca");
	arr[1] = strdup("orangina");
	arr[2] = strdup("fanta");
	arr[3] = strdup("rhum");
	arr[4] = strdup("whisky");
	arr[5] = 0;
	return (arr);
}

START_TEST(test_array) {

	char	**arr = fill_arr();
	char	**tmp = ft_arraydup(arr);

	ck_assert_uint_eq(ft_arraylen(arr), 5);
	printf(" [PASS] Test: len arr \n");

	ck_assert_uint_eq(ft_arraylen(tmp), 5);
	ck_assert_str_eq(tmp[0], "coca");
	ck_assert_str_eq(tmp[1], "orangina");
	ck_assert_str_eq(tmp[2], "fanta");
	ck_assert_str_eq(tmp[3], "rhum");
	ck_assert_str_eq(tmp[4], "whisky");
	printf(" [PASS] Test: arraydup \n");

	ft_arraydelline(&arr, 0);
	ck_assert_uint_eq(ft_arraylen(arr), 4);
	ck_assert_str_eq(arr[0], "orangina");
	printf(" [PASS] Test: array del line \n");

	char **tmp_bis = ft_arraysub(tmp, 0, 2);
	ck_assert_uint_eq(ft_arraylen(tmp_bis), 2);
	ck_assert_str_eq(tmp_bis[0], "coca");
	ck_assert_str_eq(tmp_bis[1], "orangina");
	printf(" [PASS] Test: array sub\n");

	char	**tmp_other = ft_arrayjoin(tmp_bis, "salut");
	ck_assert_uint_eq(ft_arraylen(tmp_other), 3);
	ck_assert_str_eq(tmp_other[0], "coca");
	ck_assert_str_eq(tmp_other[1], "orangina");
	ck_assert_str_eq(tmp_other[2], "salut");
	printf(" [PASS] Test: array join\n");

	ft_arraydel(&arr);
	ft_arraydel(&tmp);
	ft_arraydel(&tmp_bis);
	ck_assert_msg(!arr, "Array is not free");
	printf(" [PASS] Test: free array\n");

} END_TEST

Suite *array_suite(void) {
	Suite *s;
	TCase *tc_core;

	s = suite_create("array");
	tc_core = tcase_create("Core");

	tcase_add_test(tc_core, test_array);
	suite_add_tcase(s, tc_core);

	return s;
}
