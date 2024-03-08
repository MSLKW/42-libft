/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:10:00 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/08 11:16:06 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_lst;
	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	last_lst = ft_lstlast(*lst);
	last_lst->next = new;
}
