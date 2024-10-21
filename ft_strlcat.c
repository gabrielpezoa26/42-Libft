/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:57:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 14:35:54 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	return (i + j);
}

// int	main()
// {
// 	char	potato[] = "aaaaa";
// 	char	beans[] = "aaaaac";
// 	printf("%d", ft_strlcat(potato, beans, 3));
// 	return (0);
// }