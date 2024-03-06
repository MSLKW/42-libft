/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:46:14 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/06 16:37:09 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	test(int n)
{
	char *str = ft_itoa(n);
	printf("n: %i | str: %s\n", n, str);
}

int	main(void)
{
	test(9);
	test(15);
	test(25);
	test(-1509);
	test(-2147483648); // seggy fault
}