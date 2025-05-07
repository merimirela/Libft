/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:55:35 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/06 23:58:04 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free (*lst);
	*lst = NULL;
}

/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *list = NULL;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew(ft_strdup("Node 1"));
	node2 = ft_lstnew(ft_strdup("Node 2"));
	node3 = ft_lstnew(ft_strdup("Node 3"));

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	list = node1;

	printf("Original list:\n");
	t_list *temp = list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&list, del);
	printf("\nList after clearing:\n");
	if (list == NULL)
		printf("The list is cleared and now NULL. \n");
	return (0);
}
*/
