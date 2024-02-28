/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:21:57 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/26 12:32:53 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(void *dest, void *src, size_t n)
{
	printf("dest before memcpy: %s\n", (char*)dest);
	memcpy(dest, src, n);
	printf("dest after memcpy: %s\n", (char*)dest);
	printf("\n");
}

void	ft_test_func(void *dest, void	*src, size_t n)
{
	printf("dest before ft_memcpy: %s\n", (char*)dest);
	ft_memcpy(dest, src, n);
	printf("dest after ft_memcpy: %s\n", (char*)dest);
	printf("\n");
}

void	testcase()
{	
	char	dest[50] = "The only way";
	char	ft_dest[50] = "The only way";
	char	src[] = "NEVER";
	test_func(dest, src, 9);
	ft_test_func(ft_dest, src, 9);
}

int	main(void)
{
	testcase();
}