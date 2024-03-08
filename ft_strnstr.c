/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:18:44 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 20:14:12 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay_i;
	int		ndle_i;
	char	*hay_ptr;

	hay_i = 0;
	ndle_i = 0;
	if (needle[ndle_i] == '\0')
		return ((char *)haystack);
	while (hay_i < len && haystack[hay_i] != needle[ndle_i]
		&& haystack[hay_i] != '\0')
		hay_i++;
	while (hay_i < len && haystack[hay_i + ndle_i] == needle[ndle_i]
		&& haystack[hay_i] != '\0')
	{
		ndle_i++;
		if (needle[ndle_i] == '\0')
		{
			hay_ptr = (char *)haystack + hay_i;
			return (hay_ptr);
		}
	}
	return (NULL);
}
