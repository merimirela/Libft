/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:03:48 by mmirela-          #+#    #+#             */
/*   Updated: 2025/04/15 06:18:28 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <wchar.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	wchar_t	wide_char;

	wide_char = L'ã';
	printf("Ascii: NUL: %d\n", ft_isascii('\0'));
	printf("Ascii:: %d\n", ft_isascii(127));
	printf("Ascii:: %d\n", ft_isascii(0));
	printf("Not Ascii ã: %d\n", ft_isascii(wide_char));
	return (0);
}
*/
