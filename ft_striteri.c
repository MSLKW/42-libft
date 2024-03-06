/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:08:50 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/06 20:28:19 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*get_str_ptr(char *s, unsigned int index)
// {
// 	while (index > 0)
// 	{
// 		s++;
// 		index--;
// 	}
// 	return (s);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f(index, s + index);
		index++;
	}
}