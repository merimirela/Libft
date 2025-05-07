/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:07:22 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/04 01:52:00 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

/*
int 	main(void)
{
	int	test = 42;
	t_list *new_node = ft_lstnew(&test);

	if (!new_node)
		printf("Node Creation failed.\n");
	else
	{
		printf("Node created successfully!\n");
		printf("New node content: %d\n", *(int *)new_node->content);
	}
	free(new_node);
	return (0);
}
*/
