/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:14:45 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 14:44:11 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr_meng(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	st;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	st = start;
	i = 0;
	while ((i + st) < ft_strlen(s) && i < len)
	{
		sub[i] = s[st + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

void	test_func(char *s, unsigned int start, size_t size)
{
	printf("s<%p>: %s | start: %i | size: %zu\n", s, s, start, size);
	char *substr = ft_substr_meng(s, start, size);
	printf("substr<%p>: %s\n", substr, substr);
}

void	testcase()
{	
	char	src[50] = "The only way that is";
	test_func(src, 0, 3);
	test_func(src, 4, 4);
}

int	main(void)
{
	testcase();
}