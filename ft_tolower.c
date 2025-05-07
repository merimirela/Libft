/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 23:11:40 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/18 23:22:11 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

/*
int	main(void)
{
	printf("@: %c\n", ft_tolower('@'));
	printf("A: %c\n", ft_tolower('A'));
	printf("Z: %c\n", ft_tolower('Z'));
	printf("[: %c\n", ft_tolower('['));
	printf("a: %c\n", ft_tolower('a'));
	return (0);
}
*/
