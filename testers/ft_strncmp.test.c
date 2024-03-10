/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:42:05 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/10 16:10:21 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

void	tester(const char *str1, const char *str2, size_t n)
{
	int diff_val = strncmp(str1, str2, n);
	int	ft_diff_val = ft_strncmp(str1, str2, n);
	printf("str1: %s | str2: %s | n: %zu\n", str1, str2, n);
	printf("diff_val: %i\n", diff_val);
	printf("ft_diff_val: %i\n", ft_diff_val);
	printf("\n");
}

void	testcase()
{
	tester("ABCDEFG", "ABCDEFG", 7);
	tester("ABCDEFg", "ABCDEFG", 7);
	tester("ABCDEFG", "ABCDEFg", 7);
	tester("ABCDEFg", "ABCDEFG", 6);
	tester("ABCdEFG", "ABCDEFG", 6);
	tester("ABCDEF", "ABCDEFG", 7);
	tester("ABCDEFG", "ABCDE", 7);
	tester("ABCDEFG", "ABCDEF", 3);
	tester("abcdefgh", "", 0);
	tester("zyxbcdefgh", "abcdwxyz", 0);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		char *str1 = argv[1];
		char *str2 = argv[2];
		size_t n = atoi(argv[3]);
		tester(str1, str2, n);
	}
	else
	{
		testcase();
	}
}