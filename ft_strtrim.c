/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:00:48 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/07 11:18:50 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	ft_checkset(char c, const char *set)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	index;
	int	rindex;

	index = 0;
	rindex = ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL || *s1 == '\0' || *set == '\0')
		return (NULL);
	while (s1[index] != '\0' && ft_checkset(s1[index], set) == 0)
		index++;
	while (s1[rindex] != '\0' && ft_checkset(s1[rindex], set) == 0)
		rindex--;
	if (index > rindex)
		return (NULL);
	return (ft_substr(s1, index + 1, rindex - index - 1));
}
