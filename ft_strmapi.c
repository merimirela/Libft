/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:00:00 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/01 20:14:56 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s)
		return (0);
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char	ft_test(unsigned int i, char s)
{
	(void)i;
	return (s + 1);
}

int	main (void)
{
	char	str[] = "abcdefghijklmnopqrstuvwxyz";
	char	*result;

	printf("Original: %s\n", str);
	result = ft_strmapi(str, ft_test);
	if (result)
	{
		printf("Result:   %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed. \n");
	}
	return (0);
}
*/
