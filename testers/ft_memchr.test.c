/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:30:44 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/26 10:40:59 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(char *s, int c, size_t n)
{
	printf("Given ptr: %p\n", s);
	printf("memchr: %s\n", s);
	char *ptr = (char*)memchr(s, c, n);
	printf("ptr result: %s\n", ptr);
	printf("ptr: %p\n", ptr);
	printf("\n");
}

void	ft_test_func(char *s, int c, size_t n)
{
	printf("Given ptr: %p\n", s);
	printf("ft_memchr: %s\n", s);
	char *ptr = (char*)ft_memchr(s, c, n);
	printf("ptr result: %s\n", ptr);
	printf("ptr: %p\n", ptr);	
	printf("\n");
}


void	testcase()
{	
	char	s[50] = "The only way";
	test_func(s, 'o', 4);
	ft_test_func(s, 'o', 4);
}

int	main(void)
{
	testcase();
}