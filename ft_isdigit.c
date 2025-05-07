/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:25:51 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/09 18:37:34 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (c);
	}
	return (0);
}

/*
int	main(void)
{
	printf("/: %d\n", ft_isdigit('/'));
	printf("0: %d\n", ft_isdigit('0'));
	printf("9: %d\n", ft_isdigit('9'));
	printf(":: %d\n", ft_isdigit(':'));
	return (0);
}
*/
