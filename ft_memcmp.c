/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:36:45 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 13:09:15 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*s1_uchar;
	unsigned char	*s2_uchar;

	if (n == 0)
		return (0);
	s1_uchar = (unsigned char *) s1;
	s2_uchar = (unsigned char *) s2;
	index = 0;
	while (s1_uchar[index] == s2_uchar[index] && index < n)
	{
		index++;
	}
	return (s1_uchar[index] - s2_uchar[index]);
}
