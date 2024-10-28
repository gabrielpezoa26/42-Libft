/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:55:07 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/28 14:28:27 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*sushi_de_tomate(char const *string, char const *char_to_trim, size_t trim_len)
{
	char	*after_trimming;
	
	after_trimming = ft_strnstr(string, char_to_trim, trim_len);
	return (after_trimming);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*position;
	char	*result;
	int		i;
	char	*y;
	
	i = 0;
	y = (char *)s1;
	while(position[i] != '\0')
	{
		if (position[i] == set[i])
			i++;
		else if (position[i] != set[i])
		{
			result = sushi_de_tomate(s1, set, ft_strlen(s1));
			result = ft_strdup(y);
			i++;
		}
	}
	return (result);
}

int main()
{
	char const	*beans = "-------hello--------";
	char const	*designed_char = "-";
	
	printf("%s\n", ft_strtrim(beans, designed_char));
}