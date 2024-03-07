/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:54:55 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/07 18:13:47 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_list;

	map_list = ft_lstnew(f(lst->content));
	lst = lst->next; 
	while (lst->next != NULL)
	{
		ft_lstadd_back(&map_list, ft_lstnew(lst->content));
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (map_list);
}