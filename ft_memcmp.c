/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:34:57 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/22 17:39:03 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "Hello World";
	char	s2[] = "Heeeeeeeeee";
	char	s3[] = "";
	char	s4[] = "1";

	printf("s1: %s| s2: %s|size 2| Result: %d\n", s1, s2, ft_memcmp(s1, s2, 2));
	printf("s1: %s| s2: %s|size 3| Result: %d\n", s1, s2, ft_memcmp(s1, s2, 3));
	printf("s1: %s| s3: %s|size 2| Result: %d\n", s1, s3, ft_memcmp(s1, s3, 2));
	printf("s4: %s| s1: %s|size 2| Result: %d\n", s4, s1, ft_memcmp(s4, s1, 2));
	return (0);
}
*/
