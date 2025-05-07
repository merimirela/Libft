/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:56:33 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/18 23:08:49 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

/*
int	main(void)
{
	printf("`: %c\n", ft_toupper('`'));
	printf("a: %c\n", ft_toupper('a'));
	printf("z: %c\n", ft_toupper('z'));
	printf("}: %c\n", ft_toupper('}'));
	printf("A: %c\n", ft_toupper('A'));
	return (0);
}
*/
