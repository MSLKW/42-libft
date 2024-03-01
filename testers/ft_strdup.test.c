/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:21:55 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 12:27:13 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	test_func(char *src)
{
	printf("src: %s | src: %p\n", src, src);
	char *new_str = strdup(src);
	char *ft_new_str = ft_strdup(src);
	printf("new_str: %s | new_str: %p\n", new_str, new_str);
	printf("ft_new_str: %s | ft_new_str: %p\n", ft_new_str, ft_new_str);
}

void	testcase()
{	
	char	s[50] = "The only way";
	test_func(s);
}

int	main(void)
{
	testcase();
}