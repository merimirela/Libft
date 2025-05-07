/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 03:31:45 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/06 23:09:21 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*temp;

	temp = lst;
	count = 0;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

/*
void	ft_print_list(t_list *lst)
{
	t_list	*current = lst;
	while (current != NULL)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
}

int	main(void)
{
	int	test1 = 11;
	int	test2 = 22;
	int	test3 = 33;

	t_list *head = NULL;

	t_list *node1 = ft_lstnew(&test1);
	t_list *node2 = ft_lstnew(&test2);
	t_list *node3 = ft_lstnew(&test3);

	ft_lstadd_front(&head, node1);
	ft_print_list(head);
	printf("Node size list: %d lenght\n\n", ft_lstsize(head));
	ft_lstadd_front(&head, node2);
	ft_print_list(head);
	printf("Node size list: %d lenght\n\n", ft_lstsize(head));
	ft_lstadd_front(&head, node3);
	ft_print_list(head);
	printf("Node size list: %d lenght\n\n", ft_lstsize(head));

	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/
