/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:44:08 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 12:44:22 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(char *dest, char *src, size_t size)
{
	char *ft_src = ft_strdup(src);
	char *ft_dest = ft_strdup(dest);
	printf("BEFORE | dest<%p>: %s | src<%p>: %s | size: %zu\n", dest, dest, src, src, size);
	size_t new_size= strlcpy(dest, src, size);
	printf("AFTER | dest<%p>: %s | src<%p>: %s | new_size: %zu\n\n", dest, dest, src, src, new_size);
	printf("BEFORE | ft_dest<%p>: %s | ft_src<%p>: %s | size: %zu\n", ft_dest, ft_dest, ft_src, ft_src, size);
	size_t ft_new_size = ft_strlcpy(ft_dest, ft_src, size);
	printf("AFTER | ft_dest<%p>: %s | ft_src<%p>: %s | ft_new_size: %zu\n\n", ft_dest, ft_dest, ft_src, ft_src, ft_new_size);
	free(ft_dest);
	free(ft_src);
}

void	testcase()
{	
	char	dest[50] = "The only way that is";
	char	src[50] = "More than one";
	test_func(dest, src, 34);
}

int	main(void)
{
	testcase();
}