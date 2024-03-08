/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:45:28 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 16:57:51 by maxliew          ###   ########.fr       */
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
	void *ptr = calloc(8549, sizeof(int));
	void *ft_ptr = ft_calloc(8549, sizeof(int));
	printf("memcmp of calloc and ft_calloc: %i", memcmp(ft_ptr, ptr, 8549 * sizeof(int)));
}

void	testcase()
{	
	test_func(8549, sizeof(int));
}

int	main(void)
{
	testcase();
}