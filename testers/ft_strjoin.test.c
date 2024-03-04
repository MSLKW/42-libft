/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:32:10 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/03 10:47:30 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	test_func(char *s1, char *s2)
{
	printf("s1<%p>: %s | s2<%p>: %s\n", s1, s1, s2, s2);
	char *joined_str = ft_strjoin(s1, s2);
	printf("joined_str<%p>: %s\n", joined_str, joined_str);
	printf("\n");
}

void	testcase()
{	
	char	s1[50] = "The only way";
	char	s2[50] = " is to FIGHT";
	test_func(s1, s2);
}

int	main(void)
{
	testcase();
}