/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:04:08 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/27 13:12:14 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(char *dst, char *src, size_t n)
{
	printf("Before memmove\n");
	printf("dst Address: %p | value: %s\n", dst, dst);
	printf("src Address: %p | value: %s\n", src, src);
	void *ptr = memmove(dst - 2, src, n);
	printf("After memmove\n");
	printf("dst Address: %p | value: %s\n", dst, dst);
	printf("src Address: %p | value: %s\n", src, src);
	printf("ptr Address: %p\n", ptr);
	printf("\n");
}

void	ft_test_func(char *dst, char *src, size_t n)
{
	printf("Before ft_memmove\n");
	printf("dst Address: %p | value: %s\n", dst, dst);
	printf("src Address: %p | value: %s\n", src, src);
	void *ptr = ft_memmove(dst - 2, src, n);
	printf("After memmove\n");
	printf("dst Address: %p | value: %s\n", dst, dst);
	printf("src Address: %p | value: %s\n", src, src);
	printf("ptr Address: %p\n", ptr);
	printf("\n");
}


void	testcase()
{	
	char	src[50] = "COOL";
	char	dest[50] = "The only way";

	char	ft_src[50] = "COOL";
	char	ft_dest[50] = "The only way";
	test_func(dest, src, 4);
	ft_test_func(ft_dest, ft_src, 4);
}

int	main(void)
{
	testcase();
}