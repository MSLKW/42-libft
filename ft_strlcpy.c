/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:35:13 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 13:12:34 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	index;

	index = -1;
	if (size == 0)
		return (ft_strlen(src));
	while (++index < size - 1 && src[index] != '\0')
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (ft_strlen(src));
}
