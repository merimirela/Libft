/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:55:50 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/14 23:58:18 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
int	main(void)
{
	printf("Meri: %zu\n", ft_strlen("Meri"));
	printf("Leandro Gertrudes: %zu\n", ft_strlen("Leandro Gertrudes"));
	printf(": %zu\n", ft_strlen(""));
	return (0);
}
*/
