/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:02:58 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/23 11:33:42 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

void	test(char c)
{
	int c_val = isalpha(c);
	int	ft_c_val = ft_isalpha(c);
	printf("c: %c | c_val: %i\n", c, c_val);
	printf("c: %c | ft_c_val: %i\n\n", c, ft_c_val);	
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
}
