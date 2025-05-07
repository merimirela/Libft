/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:47:43 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/09 16:33:16 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}

/*
int	main(void)
{
	printf("1: %d\n", ft_isalpha('1'));
	printf("a: %d\n", ft_isalpha('a'));
	printf("z: %d\n", ft_isalpha('z'));
	printf("A: %d\n", ft_isalpha('A'));
	printf("Z: %d\n", ft_isalpha('Z'));
	printf("'96': %d\n", ft_isalpha(96));
	printf("{: %d\n", ft_isalpha('{'));
	printf("@: %d\n", ft_isalpha('@'));
	printf("[: %d\n", ft_isalpha('['));
	return (0);
}
*/
