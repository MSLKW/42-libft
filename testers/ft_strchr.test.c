/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:47:08 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/10 17:07:44 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

void	tester(char *str, int c)
{
	char *c_ptr = strchr(str, c);
	char *ft_c_ptr = ft_strchr(str, c);
	printf("c: %c | c_ptr: %s\n", c, c_ptr);
	printf("c: %c | ft_c_ptr: %s\n\n", c, ft_c_ptr);
}

void	testcase()
{
	tester("ABCBODW", 'B');
	tester("ABCAOIJWF" , 'a');
	tester("The trigger is strong", 'e');
	tester("tripouille", 't' + 256);
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