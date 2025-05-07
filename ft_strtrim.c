/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 01:52:51 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/24 02:30:21 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*result;
	char	*end;

	if (!s1 || !set)
	{
		return (NULL);
	}
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_strchr(set, *start))
	{
		start++;
	}
	while (start < end && ft_strchr(set, *(end - 1)))
	{
		end--;
	}
	result = ft_substr (start, 0, end - start);
	return (result);
}

/*
int	main(void)
{
	char	*str = " a a a b c d zabcdz a b c d ";
	char    *str2 = " a a a b c d zabcdz a b c d ";
	char	*emptystr = 0;
	char	*remove = " abcd";
	char	*emptyremove = 0;
	char	*result = ft_strtrim(str, remove);
	char	*result1 = ft_strtrim(emptystr, remove);
	char    *result2 = ft_strtrim(str2, emptyremove);

	printf("str: %s, remove: %s, result: %s\n", str, remove, result);
	printf("str: %s, remove: %s, result: %s\n", emptystr, remove, result1);
	printf("str: %s, remove: %s, result: %s\n", str2, emptyremove, result2);

	return (0);
}
*/
