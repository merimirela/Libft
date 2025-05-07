/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 00:31:58 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/24 00:58:43 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(len + 1, sizeof(char));
	if (!join)
	{
		return (NULL);
	}
	ft_strlcpy(join, s1, len + 1);
	ft_strlcat(join, s2, len + 1);
	return (join);
}

/*
int	main(void)
{
	char	*first, *first1, *first2;
	char	*second, *second1, *second2;
	char	*result, *result1, *result2;

	first = "Hello ";
	second = "World";
	result = ft_strjoin(first, second);
	first1 = "Hello";
	second1 = 0;
	result1 = ft_strjoin(first1, second1);
	first2 = 0;
	second2 = "World";
	result2 = ft_strjoin(first2, second2);

	printf("First: %s, Second %s, Result: %s\n", first, second, result);
	printf("First: %s, Second %s, Result: %s\n", first1, second1, result1);
	printf("First: %s, Second %s, Result: %s\n", first2, second2, result2);
	return (0);
}
*/
