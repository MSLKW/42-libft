/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:49:58 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/06 20:06:22 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;
	size_t	joined_str_size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	joined_str = ft_strdup((char *)s1);
	if (joined_str == NULL)
		return (NULL);
	joined_str_size = ft_strlen(s1) + ft_strlen(s2);
	ft_strlcat(joined_str, (char *)s2, joined_str_size + 1);
	return (joined_str);
}
