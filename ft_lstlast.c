/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:58:39 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/04 05:28:30 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

/*
int	main(void)
{
	int	value1 = 1;
	int	value2 = 2;
	int	value3 = 3;
	int	value4 = 4;
	t_list *head = ft_lstnew((void *)&value1);
	t_list *second = ft_lstnew((void *)&value2);
	t_list *third = ft_lstnew((void *)&value3);
	t_list *fourth = ft_lstnew((void *)&value4);

	head->next = second;
	second->next = third;
	third->next = fourth;

	t_list *last = ft_lstlast(head);
	if (last)
		printf("Last element %d\n", *((int *)last->content));
	else
		printf("list is empty\n");

	free(head);
	free(second);
	free(third);
	free(fourth);
	return (0);
}
*/
