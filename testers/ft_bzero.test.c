/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:39:44 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/26 09:51:10 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(char *s, size_t n)
{
	printf("Given ptr: %p\n", s);
	printf("Before bzero: %s\n", s);
	bzero(s + 7, n);
	printf("After bzero: %s\n", s);	
	printf("\n");
}

void	ft_test_func(char *s, size_t n)
{
	printf("Given ptr: %p\n", s);
	printf("Before ft_memset: %s\n", s);
	ft_bzero(s + 7, n);
	printf("After ft_memset: %s\n", s);
	printf("\n");
}


void	testcase()
{	
	char	s[50] = "The only way";
	char	ft_s[50] = "The only way";
	test_func(s, 5);
	ft_test_func(ft_s, 5);
}

int	main(void)
{
	testcase();
}