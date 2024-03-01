/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:49:58 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 16:57:28 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;
	size_t	joined_str_size;

	joined_str = ft_strdup(s1);
	joined_str_size = ft_strlen(s1) + ft_strlen(s2);
	ft_strlcat(joined_str, (char *)s2, joined_str_size);
	return (joined_str);
}