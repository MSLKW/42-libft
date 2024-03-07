/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:11:19 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/07 13:55:49 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	show_list(t_list *lst)
{
	t_list	*next_list;

	next_list = lst;
	printf("next_list %p | content: %s | next: %p\n", next_list, (char *)next_list->content, next_list->next);
	while (next_list->next != NULL)
	{
		next_list = next_list->next;
		printf("next_list %p | content: %s | next: %p\n", next_list, (char *)next_list->content, next_list->next);
	}
}

void	test()
{
	t_list *first_node = ft_lstnew("FIRST");
	t_list **list = &first_node;
	ft_lstadd_front(list, ft_lstnew("SECOND"));
	ft_lstadd_front(list, ft_lstnew("THIRD"));
	ft_lstadd_front(list, ft_lstnew("FOURTH"));
	show_list(*list);
	t_list *last_node = ft_lstlast(*list);
	printf("ft_lstlast<%p> | content: %s | next: %p\n", last_node, (char *)last_node->content, last_node->next);
}

int	main(void)
{
	test();
}