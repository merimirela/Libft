/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:00:10 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/15 06:09:50 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
	{
		return (0);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "Hello World";
	char	dest[15];

	printf("Inicial src: %s\n", src);
	printf("Inicial dest: %s\n", dest);
	ft_memcpy(dest, src, 4);
	dest[4] = '\0';
	printf("Final: %s\n", dest);
	return (0);
}
*/
