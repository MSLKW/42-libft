/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:14:45 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 10:16:26 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(char *s, unsigned int start, size_t size)
{
	printf("s<%p>: %s | start: %i | size: %zu\n", s, s, start, size);
	char *substr = ft_substr(s, start, size);
	printf("substr<%p>: %s\n", substr, substr);
}

void	testcase()
{	
	char	src[50] = "The only way that is";
	test_func(src, 22, 100);
	test_func(src, 4, 4);
	test_func(src, 0, 100);
}

int	main(void)
{
	testcase();
}