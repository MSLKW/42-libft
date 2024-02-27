/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:35:08 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/23 13:37:29 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

void	test(char c)
{
	int c_val = tolower(c);
	int	ft_c_val = ft_tolower(c);
	printf("c: %c | c_val: %c\n", c, c_val);
	printf("c: %c | ft_c_val: %c\n\n", c, ft_c_val);
}

void	testcase()
{
	test('a');
	test('A');
	test('%');
	test('9');
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