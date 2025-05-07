/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:38:51 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/09 19:02:44 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}

/*
int	main(void)
{
	printf("/: %d\n", ft_isalnum('/'));
	printf("0: %d\n", ft_isalnum('0'));
	printf("9: %d\n", ft_isalnum('9'));
	printf(":: %d\n", ft_isalnum(':'));
	printf("@: %d\n", ft_isalnum('@'));
	printf("A: %d\n", ft_isalnum('A'));
	printf("Z: %d\n", ft_isalnum('Z'));
	printf("[: %d\n", ft_isalnum('['));
	printf("`: %d\n", ft_isalnum('`'));
	printf("a: %d\n", ft_isalnum('a'));
	printf("z: %d\n", ft_isalnum('z'));
	printf("{: %d\n", ft_isalnum('{'));
	return (0);
}
*/
