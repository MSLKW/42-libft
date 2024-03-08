/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:28:36 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 11:20:45 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			index;
	unsigned char	*s1_uc;
	unsigned char	*s2_uc;

	index = 0;
	s1_uc = (unsigned char *)str1;
	s2_uc = (unsigned char *)str2;
	while (s1_uc[index] == s2_uc[index] && s1_uc[index] != '\0'
		&& index < n - 1)
		index++;
	return (s1_uc[index] - s2_uc[index]);
}
