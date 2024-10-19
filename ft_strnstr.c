/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:40:49 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/19 16:31:05 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(char *dest, char *src, size_t n)
{
	size_t	i;
	int	j;

	i = 0;
	while ((dest[i] != '\0') && (i < n))
	{
		j = 0;
		while ((dest[i] == src[j]) || (src[j] == '\0'))
		{
			if (src[j] == '\0')
			{
				return (&dest[i - j]);
			}
			j++;
			i++;
		}
		i++;
	}
	return (NULL);
}

// int    main()
// {
//     char    potato[] = "fone";
//     char    habibs[] = "aaaaaaaafoneaaaa";
//     printf("%s", ft_strnstr(habibs, potato, 15));
// }