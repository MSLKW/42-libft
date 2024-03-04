/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:23:31 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/04 14:13:04 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	test_func(char *str, char c)
{
	printf("str: %s | c: %c\n", str, c);
	char **split_arr = ft_split(str, c);
	printf("{");
	int	index = 0;
	while (split_arr[index] != NULL)
	{
		printf("%s, ", split_arr[index]);
		index++;
	}
	printf("}\n");
}

void	testcase()
{	
	char	s1[50] = "The only way that is";
	char	c = ' ';
	test_func(s1, c);
}

int	main(void)
{
	testcase();
}