/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:28:36 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/23 15:15:14 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	index;

	index = 0;
	while (str1[index] == str2[index] && str1[index] != '\0' && index < n - 1)
	{
		index++;
	}
	return (str1[index] - str2[index]);
}