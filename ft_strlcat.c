/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 00:23:25 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/18 22:47:42 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0)
	{
		return (src_len);
	}
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && size > (dst_len + 1))
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (dst_len + ft_strlen((char *)(&src[i])));
}

/*
int	main(void)
{
	char	buffer1[20] = "Hello";
	char	buffer2[20] = "Hello";
	char    buffer3[20] = "Hello";
	char    buffer4[6] = "Hello";
	char    buffer5[14] = "Hi ";
	size_t	result;
	
	result = ft_strlcat(buffer1, " World", 20);
	printf("Normal append   : %zu | Buffer: %s\n", result, buffer1);
//
	result = ft_strlcat(buffer2, " World", 20);
	printf("Original strlcat: %zu | Buffer: %s\n", result, buffer2);
//
	result = ft_strlcat(buffer3, " World", 0);	
	printf("size 0          : %zu | Buffer not modified: %s\n", result, buffer3);
//
	result = ft_strlcat(buffer4, " World", 5);
	printf("Size < dst      : %zu | Buffer: %s\n", result, buffer4);
//
	result = ft_strlcat(buffer5, "there buddy", sizeof(buffer5));
	printf("Original strlcat: %zu | Buffer: %s\n", result, buffer5);
	return (0);
}
*/
