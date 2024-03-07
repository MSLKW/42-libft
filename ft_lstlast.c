/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:07:54 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/07 14:11:27 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*next_list;

	if(lst == NULL)
		return (NULL);
	next_list = lst;
	while (next_list->next != NULL)
	{
		next_list = next_list->next;
	}
	return (next_list);
}
