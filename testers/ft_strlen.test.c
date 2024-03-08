/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:44:07 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 11:26:00 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

void	test(char *str)
{
	int c_val = strlen(str);
	int	ft_c_val = ft_strlen(str);
	printf("str: %s | c_val: %i\n", str, c_val);
	printf("str: %s | ft_c_val: %i\n\n", str, ft_c_val);
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
		test(NULL);
	}
}