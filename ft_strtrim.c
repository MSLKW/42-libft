/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:00:48 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 16:01:18 by maxliew          ###   ########.fr       */
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

	if (s1 == NULL || set == NULL)
		return (NULL);
	index = 0;
	rindex = ft_strlen(s1) - 1;
	if (s1[index] == '\0')
		return ft_substr("", 0, 0);
	if (set[index] == '\0')
		return ft_substr(s1, index, ft_strlen(s1));
	while (s1[index] != '\0' && ft_checkset(s1[index], set))
		index++;
	while (rindex > index && ft_checkset(s1[rindex], set))
		rindex--;
	if (index > rindex)
		return (ft_substr("", 0, 0));
	return (ft_substr(s1, index, (rindex - index + 1)));
}
