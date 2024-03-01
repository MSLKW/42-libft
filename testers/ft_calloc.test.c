/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:45:28 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 12:55:46 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	printarr(int *ptr, size_t size)
{
	size_t	index;

	index = 0;
	while (index < size)
	{
		printf("%i ", ptr[index]);
		index++;
	}
	printf("\n");
}

void	test_func(size_t count, size_t size)
{
	int	*malloc_ptr = malloc(count * size);
	printf("malloc<%p>: ", malloc_ptr);
	printarr(malloc_ptr, count);
	int	*ptr = calloc(count, size);
	printf("calloc<%p>: ", ptr);
	printarr(ptr, count);
	int	*ft_ptr = ft_calloc(count, size);
	printf("ft_calloc<%p>: ", ft_ptr);
	printarr(ft_ptr, count);
	free(malloc_ptr);
	free(ptr);
	free(ft_ptr);
}

void	test_func_malloc(size_t count, size_t size)
{
	int *ptr = malloc(count * size);
	printarr(ptr, count);
	printf("\n");
}

void	testcase()
{	
	test_func(10, sizeof(int));
}

int	main(void)
{
	testcase();
}