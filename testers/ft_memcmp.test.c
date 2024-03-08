/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:56:29 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 10:54:16 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(void *s1, void *s2, size_t n)
{
	printf("s1: %s | s2: %s | n: %li\n", (char*)s1, (char*)s2, n);
	int val = memcmp(s1, s2, n);
	int ft_val = ft_memcmp(s1, s2, n);
	printf("val: %i\n", val);
	printf("ft_val: %i\n", ft_val);
	printf("\n");
}

void	testcase()
{	
	test_func("ABC", "ABD", 3);
	test_func("ABC", "ABC", 3);
	test_func("ABC", "AB", 3);
	test_func("", "", 1);
	test_func("", "", 2);
	test_func("ABC", "ABC", 0);
	test_func("\xff\xaa\xde\x12", "\xff\xaa\xde\x12 MOAIWJD", 4);
}

int	main(void)
{
	testcase();
}