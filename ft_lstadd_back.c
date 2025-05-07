/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:03:12 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/06 21:07:00 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*head = NULL;
	print_list(head);
	t_list	*node1 = ft_lstnew("Hello ");
	ft_lstadd_back(&head, node1);
	print_list(head);
	t_list  *node2 = ft_lstnew("World ");
	ft_lstadd_back(&head, node2);
	print_list(head);
	t_list  *node3 = ft_lstnew("!");
	ft_lstadd_back(&head, node3);
	print_list(head);
	return (0);
}
*/
