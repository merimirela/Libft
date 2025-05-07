/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:43:23 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/10 21:09:17 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*ret;

	ret = s;
	while (n > 0)
	{
		*(unsigned char *)s = (unsigned char) c;
		s++;
		n--;
	}
	return (ret);
}

/*
int	main(void)
{
	char	s[12] = "Hello world";
	int	c;
	size_t	n;

	c = 'H';
	n = 4;

	printf("Original: %s |%d |%zu\n", s, c, n);
	ft_memset(s, c, n);
	printf("Final   : %s\n", s);
	ft_memset(s, '7', 7);
	printf("More    : %s\n", s);
	ft_memset(s, 'A', 15);
	printf("Extra   : %s\n", s);	
//	printf("Extra   : %s\n", ft_memset(s, 'A', 15));
	return (0);
}
*/
