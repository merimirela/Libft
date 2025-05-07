/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:51:02 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/17 21:31:06 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
	char	str[] = "Hello World";

	printf("Inicial: %s\n", str);
	ft_bzero(str, 4);
	printf("Final: %s\n", str);
	printf("Still 0: %s\n", str + 3);
	printf("Remaining string: %s\n", str + 4);
	return (0);
}
*/
