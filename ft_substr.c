/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:59:24 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/04 11:37:44 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*new_str;

	new_str = ft_calloc(len + 1, sizeof(char));
	if (new_str == NULL || len == 0)
		return (NULL);
	ft_strlcpy(new_str, (char *)s + start, len + 1);
	return (new_str);
}