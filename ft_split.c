/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:16:33 by mmirela-          #+#    #+#             */
/*   Updated: 2025/05/07 02:07:59 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
			{
				s++;
			}
		}
		else
		{
			s++;
		}
	}
	return (count);
}

static	int	ft_putword(char const **s, char c, char ***finalstr, size_t i)
{
	size_t	wordlen;

	wordlen = 0;
	while (**s && **s != c)
	{
		(*s)++;
		wordlen++;
	}
	(*finalstr)[i] = ft_substr(*s - wordlen, 0, wordlen);
	if (!(*finalstr)[i])
	{
		while (i > 0)
		{
			free((*finalstr)[i - 1]);
			i--;
		}
		free (*finalstr);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**finalstr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	finalstr = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!finalstr)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			if (!ft_putword(&s, c, &finalstr, i))
				return (NULL);
			i++;
		}
	}
	finalstr[i] = 0;
	return (finalstr);
}

/*
#include <stdlib.h>
int	main(void)
{
	char    *str = "hello!";
        char    c = ' ';
        char    **result = ft_split(str, c);
        int     i = 0;

        printf("str original: %s, split by: >%c<\n", str, c);
        while (result[i])
        {
                printf("Word %d: %s\n", i, result[i]);
		free (result[i]);
                i++;
        }
        free (result);
        return (0);
}
*/
/*
#include <stdlib.h>
int	main(void)
{
	char	*str = "Hello world, its a beautiful day";
	char	c = ' ';
	char	**result = ft_split(str, c);
	int	i = 0;

	printf("str original: %s, split by: >%c<\n", str, c);
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		i++;
	}
	free (result);
	return (0);
}
*/
