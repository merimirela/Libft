/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 00:34:21 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/07 01:43:26 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	ft_make_letter(void *content)
{
	char *str = (char *)content;
	size_t	x;
	x = 0;
	while (str[x] != '\0')
	{
		str[x] = 'M';
		x++;
	}
}

int	main(void)
{
	char	*s1 = ft_strdup("Hello");
	char    *s2 = ft_strdup("World");
	char    *s3 = ft_strdup("Yes!");

	t_list	*node1 = ft_lstnew(s1);
	t_list	*node2 = ft_lstnew(s2);
	t_list  *node3 = ft_lstnew(s3);

	node1->next = node2;
	node2->next = node3;

	printf("Initial:\n");
	print_list(node1);

	ft_lstiter(node1, ft_make_letter);
	printf("After:\n");
	print_list(node1);

	ft_lstclear(&node1, free);
	return (0);
}
*/
