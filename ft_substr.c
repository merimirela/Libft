/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:44:29 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/24 00:22:17 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
	}
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*
int	main(void)
{
	char	*str, *str1, *str2, *str3, *str4;
	unsigned int	start, start1, start2, start3, start4;
	size_t	len, len1, len2, len3, len4;

	str = "Hello world, it's a beautiful day";
	str1 = "Hello world, it's a beautiful day";
	str2 = "Hello world, it's a beautiful day";
	str3 = "Hello world, it's a beautiful day";
	str4 = "";
	start = 6;
	start1 = 21;
	start2 = 50;
	start3 = 6;
	start4 = 6;
	len = 10;
	len1 = 30;
	len2 = 10;
	len3 = 0;
	len4 = 10;

	printf("s: %s, start: %d, len: %zu\n", str, start, len);
	printf("Result: %s\n\n", ft_substr(str, start, len));
	printf("s: %s, start: %d, len: %zu\n", str1, start1, len1);
	printf("Result: %s\n\n", ft_substr(str1, start1, len1));
	printf("s: %s, start: %d, len: %zu\n", str2, start2, len2);
	printf("Result: %s\n\n", ft_substr(str2, start2, len2));
	printf("s: %s, start: %d, len: %zu\n", str3, start3, len3);
	printf("Result: %s\n\n", ft_substr(str3, start3, len3));
	printf("s: %s, start: %d, len: %zu\n", str4, start4, len4);
	printf("Result: %s\n\n", ft_substr(str4, start4, len4));
	return (0);
}
*/
