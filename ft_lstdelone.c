/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:22:00 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/06 23:10:53 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
void del(void *content)
{
	free(content);
}

int	main(void)
{
	char *content = malloc(sizeof(char) * 4);
	if (!content)
		return 1;
	content[0] = 'H';
	content[1] = 'e';
	content[2] = 'y';
	content[3] = '\0';

	t_list	*node = ft_lstnew(content);
	if (!node)
		return (1);
	printf("Before: %s\n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("After being delated: (node is delated)\n");
	printf("After: %s\n", (char *)node->content);
	return (0);
}
*/
