/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:25:14 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/23 14:26:28 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

void	tester(char *str, int c)
{
	char *c_ptr = strrchr(str, c);
	char *ft_c_ptr = ft_strrchr(str, c);
	printf("c: %c | c_ptr: %s\n", c, c_ptr);
	printf("c: %c | ft_c_ptr: %s\n\n", c, ft_c_ptr);
}

void	testcase()
{
	tester("ABCBOLOPBADWS", 'B');
	tester("ABCPOJBNIWAGPOJ" , 'a');
	tester("The trigger is strong", 'e');
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char *str = argv[1];
		char *c = argv[2];
		tester(str, c[0]);
	}
	else
	{
		testcase();
	}
}