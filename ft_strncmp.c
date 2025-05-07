/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:01:19 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/19 22:27:48 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "abcdefghi";
	char	s2[] = "abcxyz";
	char	s3[] = "A";
	char	s4[] = "";
	char	s5[] = "1";

	printf("s1: %s s2: %s n: %d | %d\n", s1, s2, 3, ft_strncmp(s1, s2, 3));
	printf("s1: %s s2: %s n: %d | %d\n", s1, s2, 4, ft_strncmp(s1, s2, 4));
	printf("s1: %s s2: %s n: %d | %d\n", s1, s3, 1, ft_strncmp(s1, s3, 1));
	printf("s1: %s s2: %s n: %d | %d\n", s1, s4, 3, ft_strncmp(s1, s4, 3));
	printf("s1: %s s2: %s n: %d | %d\n", s1, s5, 3, ft_strncmp(s1, s5, 1));
	return (0);
}
*/
