/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:24:39 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/15 06:16:14 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("31:  Non printable: %d\n", ft_isprint(31));
	printf("' ': Printable    : %d\n", ft_isprint(' '));
	printf("~:   Printable    : %d\n", ft_isprint('~'));
	printf("DEL: Non printable: %d\n", ft_isprint(127));
	return (0);
}
*/
