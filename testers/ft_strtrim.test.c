/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:03:23 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/04 11:43:21 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[100] = "WADOIj;URNNADA'AB";
	char	s2[100] = ";'";

	printf("s1: %s | s2: %s\n", s1, s2);
	char *str = ft_strtrim(s1, s2);
	printf("str: %s\n", str);
	printf("DONE\n");
}