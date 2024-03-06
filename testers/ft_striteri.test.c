/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:20:08 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/06 20:27:16 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	cool_func(unsigned int index, char *c)
{
	printf("index: %i | c: %s\n", index, c);
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= CAPITALIZATION_DIFF;
	}
}

void	test(char	*s)
{
	void	(*func)(unsigned int, char *) = &cool_func;
	ft_striteri(s, func);
	printf("new_str: %s\n", s);
}

int	main(void)
{
	char	s[50] = "INcDReDiBLE";
	test(s);
}