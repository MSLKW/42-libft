/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:59:24 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 15:00:07 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*new_str;

	index = 0;
	new_str = calloc(len + 1, sizeof(char));
	ft_strlcpy(new_str, (char *)s + start, len + 1);
	return (new_str);
}