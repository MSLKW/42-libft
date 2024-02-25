/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:36:55 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/25 16:51:07 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t index;
	unsigned char	*ptr;

	index = 0;
	ptr = s;
	while(index < n)
	{
		ptr[index] = (unsigned char)c;
		index++;
	}
	return (s);
}