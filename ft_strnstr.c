/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:40:49 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 19:15:00 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			if (needle[j] == '\0')
			{
				return ((char *)(&haystack[i]));
			}
			j++;
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