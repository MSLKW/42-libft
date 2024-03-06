/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:46:47 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/06 20:04:38 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	cool_func(unsigned int index, char c)
{
	printf("index: %i\n", index);
	if (c >= 'a' && c <= 'z')
	{
		c -= CAPITALIZATION_DIFF;
	}
	return (c);
}

void	test(char	*s)
{
	char	(*func)(unsigned int, char) = &cool_func;
	char	*new_str = ft_strmapi(s, func);
	printf("new_str: %s\n", new_str);
}

int	main(void)
{
	test("INcREdiBlE");
}