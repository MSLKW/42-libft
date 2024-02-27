/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:38:22 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/23 15:48:57 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void	tester(char *haystack, char *needle, size_t n)
{
	char *c_ptr = strnstr(haystack, needle, n);
	char *ft_c_ptr = ft_strnstr(haystack, needle, n);
	printf("haystack: %s | needle: %s | n: %zu\n", haystack, needle, n);
	printf("c_ptr: %s\n", c_ptr);
	printf("ft_c_ptr: %s\n\n", ft_c_ptr);
}

void	testcase()
{
	tester("Foo Bar Baz", "Bar", 11);
	tester("COOL TIMMY AINT AROUND", "jack", 100);
	tester("The Very Best", "Very", 3);
	tester("ABCDEFG", "DFG", 100);
	tester("Tranquility", "quil", 100);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char *haystack = argv[1];
		char *needle = argv[2];
		size_t n = atoi(argv[3]);
		tester(haystack, needle, n);
	}
	else
	{
		testcase();
	}
}