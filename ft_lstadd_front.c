/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:58:30 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/04 03:29:30 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
void	print_list(t_list *lst)
{
	t_list *current = lst;
	while (current != NULL)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	printf("\n");
}

int	main(void)
{
	int	test1;
	int	test2;
	int	test3;

	test1 = 1;
	test2 = 2;
	test3 = 3;

	t_list *head = NULL;

	t_list *node1 = ft_lstnew(&test1);
	t_list *node2 = ft_lstnew(&test2);
	t_list *node3 = ft_lstnew(&test3);

	ft_lstadd_front(&head, node1);
	print_list(head);
	ft_lstadd_front(&head, node2);
	print_list(head);
	ft_lstadd_front(&head, node3);
	print_list(head);

	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/
