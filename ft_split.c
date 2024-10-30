/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:51:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/29 23:47:14 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char delimeter)
{
	size_t	num;
	int		word;

	num = 0;
	while (*s)
	{
		word = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			if (!word)
			{
				++num;
				word = 1;
			}
			++s;
		}
	}
	return (num);
}

static void	ft_fillwords(char **string, char const *s, char delimeter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			string[i] = malloc(len + 1);
			ft_strlcpy(string[i], s - len, len + 1);
		}
		++i;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[ft_countwords(s, c)] = NULL;
	ft_fillwords(result, s, c);
	return (result);
}
