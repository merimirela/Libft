/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:39:13 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/17 21:36:40 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char	d[] = "Hello World";
	char	d1[] = "Hello World";
	char	s[] = "Hello World";
	char	s1[] = "Hello World";
	char	dest2[20];
	char	dest3[20];
	
	size_t lend = ft_strlcpy(d, "aaa", 3);
	size_t lend1 = strlcpy(d1, "aaa", 3);
	size_t lens = ft_strlcpy(dest2, s, 3);
	size_t lens1 = strlcpy(dest3, s1, 3);
	printf("Result: %s, Lenght: %zu\n", d, lend);
	printf("Result: %s, Lenght: %zu\n", d1, lend1);
	printf("Result: %s, Lenght: %zu\n", s, lens);
	printf("Result: %s, Lenght: %zu\n", s1, lens1);
	return (0);
}
*/
