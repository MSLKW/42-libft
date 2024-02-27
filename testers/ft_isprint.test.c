/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:15:57 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/23 12:17:47 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

void	test(char c)
{
	int c_val = isprint(c);
	int	ft_c_val = ft_isprint(c);
	printf("c: %c | c_val: %i\n", c, c_val);
	printf("c: %c | ft_c_val: %i\n\n", c, ft_c_val);
}

void	testcase()
{
	test('a');
	test('A');
	test('%');
	test('9');
	test(' ');
	test('\n');
	test('\t');
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