/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:00:48 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/01 17:05:56 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	// iterate through s1
	// for each char in s1, loop through set and check for any matching characters
	// when the first trim character is found, set a flag on until it find another trim char in set
	//
	// error handling
	// if no trim char is found in s1, return NULL.
	// if only 1 trim char is found without the corresponding end char, return NULL
}