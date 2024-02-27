/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:10:22 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/23 12:11:14 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

void	test(char c)
{
	int c_val = isdigit(c);
	int	ft_c_val = ft_isdigit(c);
	printf("c: %c | c_val: %i\n", c, c_val);
	printf("c: %c | ft_c_val: %i\n\n", c, ft_c_val);
}

void	testcase()
{
	test('a');
	test('A');
	test('%');
	test('9');
	test('0');
	test('3');
	test(' ');
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int	index = 1;
		while (index < argc)
		{
			char *str = argv[index];
			test(str[0]);
			index++;
		}
	}
	else
	{
		testcase();
	}
}