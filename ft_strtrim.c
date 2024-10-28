/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:55:07 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/28 13:32:40 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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