/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:51:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/29 23:20:50 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

int main(void)
{
    char **split_result;
    size_t i;

    // Example input strings and delimiters
    char *inputs[] = {
        "Hello,World,This,Is,A,Test",
        ",,,Leading,Delimiters",
        "Trailing,Delimiters,,,",
        "Consecutive,,Delimiters,,",
        "",
        NULL
    };
    char delimiters[] = {',', ',', ',', ',', ',', ','};
    size_t num_tests = sizeof(inputs) / sizeof(inputs[0]);

    for (size_t test = 0; test < num_tests; test++)
    {
        if (inputs[test] == NULL)
            continue;

        printf("Test %zu: \"%s\"\n", test + 1, inputs[test]);
        split_result = ft_split(inputs[test], delimiters[test]);

        if (!split_result)
        {
            printf("ft_split returned NULL\n\n");
            continue;
        }

        printf("Split Results:\n");
        i = 0;
        while (split_result[i] != NULL)
        {
            printf("  split_result[%zu]: \"%s\"\n", i, split_result[i]);
            i++;
        }

        // Free the allocated memory
        i = 0;
        while (split_result[i] != NULL)
        {
            free(split_result[i]);
            i++;
        }
        free(split_result);
        printf("\n");
    }

    return (0);
}