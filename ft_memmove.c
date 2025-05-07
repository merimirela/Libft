/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 22:22:10 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/15 06:19:49 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src > dest)
	{
		return (ft_memcpy(dest, src, n));
	}
	else if (src < dest)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "Hello World";
	char	src_a[] = "Hello World";
	char    src_b[] = "Hello World";
	char	dest[15];

	printf("Original                : %s\n", src);
	ft_memmove(dest, src, 5);
	printf("No overlap              : %s\n", dest);
	ft_memmove(src_a + 6, src_a, 5);
	printf("Overlap, src before dest: %s\n", src_a);
	ft_memmove(src_b, src_b + 6, 5);
	printf("Overlap, src after dest : %s\n", src_b);
	return (0);
}
*/
