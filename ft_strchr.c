/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 23:41:43 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/19 00:41:42 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			c_find;

	c_find = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c_find)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (s[i] == c_find)
	{
		return ((char *) &s[i]);
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*test1 = "Hello, world!";
	const char	*test2 = "42 Network";
	const char	*test3 = "";
	const char	*test4 = "abcabcabc";
	char	c1 = 'o';
	char	c2 = 'z';
	char	c3 = '\0';
	char	c4 = 'b';

// Test 1
	char *res1 = ft_strchr(test1, c1);
	printf("Test 1: Searching for '%c' in \"%s\": %s\n", c1, test1, 
	res1 ? res1 : "NULL");

// Test 2
	char *res2 = ft_strchr(test2, c2);
	printf("Test 2: Searching for '%c' in \"%s\": %s\n", c2, test2,
       	res2 ? res2 : "NULL");

// Test 3
	char *res3 = ft_strchr(test3, c3);
	printf("Test 3: Searching for '\\0' in \"%s\": %s\n", test3,
       	res3 ? "Found" : "NULL");

// Test 4
	char *res4 = ft_strchr(test4, c4);
	printf("Test 4: Searching for '%c' in \"%s\": %s\n", c4, test4, 
	res4 ? res4 : "NULL");
	return (0);
}
*/
