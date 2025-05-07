/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:56:04 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/22 20:32:55 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] == 32) || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
int	main(void)
{
	char	s[] = " ----+--+1234ab567";
	char	t[] = " -1234ab567";
	char    r[] = " +1234ab567";
	int		result_s = ft_atoi(s);
	int		result_t = ft_atoi(t);
	int		result_r = ft_atoi(r);

	printf("s: %d\n", result_s);
	printf("t: %d\n", result_t);
	printf("r: %d\n", result_r);
	return (0);
}
*/
