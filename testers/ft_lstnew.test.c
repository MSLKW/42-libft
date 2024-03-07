/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxliew <maxliew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:27:10 by maxliew           #+#    #+#             */
/*   Updated: 2024/03/07 12:37:12 by maxliew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	test(void *content)
{
	printf("*content<%p>: %s\n", content, (char *)content);
	t_list *new_list = ft_lstnew(content);
	printf("new_list | *content<%p>: %s | next<%p>: %s\n", new_list->content, (char *)new_list->content, new_list->next, (char *)new_list->next);
}

int	main(void)
{
	test("I am cool");
}