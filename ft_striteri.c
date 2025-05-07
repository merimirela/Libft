/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:17:45 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/01 21:24:04 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	ft_test(unsigned int i, char *c)
{
	*c = *c + 1;
}

int	main(void)
{
	char	str[] = "abcdefghijklmnopqrstuvwxyz";

	printf("Original: %s\n", str);
	ft_striteri(str, ft_test);
	printf("Result:   %s\n", str);
	return (0);
}
*/
