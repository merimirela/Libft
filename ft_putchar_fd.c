/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:41:46 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/01 21:52:47 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('c', 1);
	return (0);
}
*/
