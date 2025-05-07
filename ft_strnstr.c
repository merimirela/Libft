/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:42:14 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/22 19:54:50 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *) big);
	}
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	s1[] = "Hello world, it's a beautiful day";
	char	s2[] = "beautiful";
	char	s3[] = "";
	char	s4[] = "duck";
	char	s5[] = "or";

	printf("s1: %s| s2: %s|n: 3| %s\n", s1, s2, ft_strnstr(s1, s2, 3));
	printf("s1: %s| s2: %s|n: 50| %s\n", s1, s2, ft_strnstr(s1, s2, 50));
	printf("s1: %s| s2: %s|n: 11| %s\n", s1, s2, ft_strnstr(s1, s2, 11));
	printf("s1: %s| s3: %s|n: 3| %s\n", s1, s3, ft_strnstr(s1, s3, 3));
	printf("s1: %s| s4: %s|n: 3| %s\n", s1, s4, ft_strnstr(s1, s4, 3));
	printf("s1: %s| s5: %s|n: 50| %s\n", s1, s5, ft_strnstr(s1, s5, 50));
}
*/
