/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 01:46:33 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/07 03:09:03 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_obj = ft_lstnew(new_content);
		if (!new_obj)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}

/*
void	del_content(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*original = ft_lstnew(ft_strdup("Hello "));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("World ")));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("!")));

	printf("Original list:\n");
	print_list(original);

	t_list	*mapped = ft_lstmap(original, (void *)ft_strdup, del_content);

	if (!mapped)
	{
		printf("Mapping failed.\n");
	}
	else
	{
		printf("\nMapped list:\n");
		print_list(mapped);
	}
	ft_lstclear(&original, del_content);
	ft_lstclear(&mapped, del_content);
	return (0);
}
*/
