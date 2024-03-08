/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:58:58 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 13:19:35 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	test(char *str)
{
	int c_val = atoi(str);
	int	ft_c_val = ft_atoi(str);
	printf("str: %s | c_val: %i\n", str, c_val);
	printf("str: %s | ft_c_val: %i\n\n", str, ft_c_val);
}

void	testcase()
{
	char	*n = "-085";
	test("abc");
	test("00123");
	test("123ab456");
	test(" -123a89");
	test("  -123");
	test(" -++-123");
	test("   +123");
	test("  -123 456");
	test("\n123");
	test("0");
	test("945");
	test(n);
	test("\t\v\f\r\n \f-06050");
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