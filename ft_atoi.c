/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:35:43 by maxliew           #+#    #+#             */
/*   Updated: 2024/02/27 11:16:19 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(char c)
{
	return(c == ' '
		|| c == '\n'
		|| c == '\t'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *str)
{
	// as many isspace spaces as you like in the first half
	// only one symbol sign, anymore breaks the program
	// any numeric, any other character than numeric will break and give the current result

	int	index;

	while(ft_isspace(str[index]))
	{

	}
}