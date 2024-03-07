/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:20:45 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/07 18:49:37 by maxliew          ###   ########.fr       */
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
	ft_lstadd_back(list, ft_lstnew("SECOND"));
	ft_lstadd_back(list, ft_lstnew("THIRD"));
	ft_lstadd_back(list, ft_lstnew("FOURTH"));
	show_list(*list);
	t_list *last_node = ft_lstlast(*list);
	ft_lstdelone(last_node, &free);
	printf("ft_lstlast<%p>\n", last_node);
}

int	main(void)
{
	test();
}