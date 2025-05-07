/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:40:05 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/03 22:26:57 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;

	if (size != 0 && nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	temp = (void *)malloc(nmemb * size);
	if (!temp)
	{
		return (NULL);
	}
	ft_bzero(temp, nmemb * size);
	return (temp);
}

/*
int	main(void)
{
	size_t	str = 10;
	size_t	size = 6; 
	int	*buffer = (int *)ft_calloc(str, size);
	int	x = 0;

	if (!buffer)
	{
		printf("ft_calloc alocation failed.\n");
		return (1);
	}
	printf("Calloc successfully allocated memory:)\n");
	while (x < size)
	{
		printf("buffer[%d] = %d %s\n", x, buffer[x], buffer[x]);
		x++;
	}
	free(buffer);
	return (0);
}
*/
