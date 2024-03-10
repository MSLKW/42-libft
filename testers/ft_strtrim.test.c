/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:03:23 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/10 15:10:18 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[100] = ";;;;;;;;";
	char	s2[100] = ";";
	char	s_cmp[100] = "\0";

	printf("s1: %s | s2: %s\n", s1, s2);
	char *str = ft_strtrim(s1, s2);
	printf("str: %s\n", str);
	printf("diff %i\n", strcmp(s_cmp, str));
	printf("DONE\n");
}
