/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:16:59 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/27 10:40:00 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	char	*latest_ptr;

	ptr = (char *)str;
	latest_ptr = NULL;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			latest_ptr = ptr;
		ptr++;
	}
	return (latest_ptr);
}