/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:56:52 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/07 02:08:22 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	len;
	char	*result;

	len = ft_count(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = n * -1;
	}
	len--;
	while (n >= 10)
	{
		result[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	result[len] = n + 48;
	return (result);
}
