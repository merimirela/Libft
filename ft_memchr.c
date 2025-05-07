/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 23:51:10 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/20 00:43:55 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "Hello World";
	int	o = 'o';
	int	a = 'a';
	int	empty = '\0';

	printf("s: %s|c: %c|n: 3|Reult: %s|\n", str, o,
       	(char *)ft_memchr(str, o, 3));
	printf("s: %s|c: %c|n: 11|Reult: %s|\n", str, o,
       	(char *)ft_memchr(str, o, 11));
	printf("s: %s|c: %c|n: 11|Reult: %s|\n", str, a,
       	(char *)ft_memchr(str, a, 11));
	printf("s: %s|c: %c|n: 11|Reult: %s|\n", str, (char)empty,
       	(char *)ft_memchr(str, empty, 11));
	return (0);
}
*/
