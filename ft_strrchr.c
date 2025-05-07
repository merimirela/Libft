/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:07:02 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/19 20:59:09 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*last;
	char			c_find;

	c_find = (char) c;
	last = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c_find)
		{
			last = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == c_find)
	{
		last = (char *) &s[i];
	}
	return (last);
}

/*
int	main(void)
{
	char	str1[] = "Hello\0 World";
	char	str2[] = "ab1ab2ab3ab4ab5ab6";
	char	str3[] = "abc";
	char	*res1;
	char	*res2;
	char	*res3;

//      Test 1
	res1 = ft_strrchr(str1, '\0');
	printf("String: %s | Found: %s\n", str1, res1);

//      Test 2
        res2 = ft_strrchr(str2, 'a');
        printf("String: %s | Found: %s\n", str2, res2);

//      Test 3
        res3 = ft_strrchr(str3, 'd');
        printf("String: %s | Found: %s\n", str3, res3);
	return (0);
}
*/
