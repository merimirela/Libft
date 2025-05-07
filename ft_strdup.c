/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:50:47 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/23 00:27:30 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char			*dest;
	size_t			i;

	i = 0;
	dest = (char *) malloc(ft_strlen(s) + 1);
	if (!dest)
	{
		return (NULL);
	}
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	s1[] = "";
	char	s2[] = "Hello World";
	char	*result1;
	char	*result2;

	printf("s1 memory: %p\n", s1);
	printf("s2 memory: %p\n", s2);
	result1 = ft_strdup(s1);
	result2 = ft_strdup(s2);
	printf("s1: %s| Result: %s|Address: %p\n", s1, result1, result1);
	printf("s2: %s| Result: %s|Address: %p\n", s2, result2, result2);
	free(result1);
	free(result2);
	return (0);
}
*/
