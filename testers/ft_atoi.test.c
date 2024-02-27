/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:58:58 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/27 11:11:09 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	test(char *c)
{
	int c_val = atoi(c);
	// int	ft_c_val = ft_atoi(c);
	printf("c: %s | c_val: %i\n", c, c_val);
	// printf("c: %s | ft_c_val: %i\n\n", c, ft_c_val);
}

void	testcase()
{
	test("abc");
	test("00123");
	test("123ab456");
	test(" -123a89");
	test("  -123");
	test(" -++-123");
	test("   +123");
	test("  -123 456");
	test("\n123");
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int	index = 1;
		while (index < argc)
		{
			char *str = argv[index];
			test(str);
			index++;
		}
	}
	else
	{
		testcase();
	}
}