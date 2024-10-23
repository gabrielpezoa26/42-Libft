/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:57:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/23 11:33:18 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	index;
	size_t	jindex;

	size_dest = 0;
	size_src = 0;
	while (dst[size_dest] && size_dest < size)
		size_dest++;
	while (src[size_src])
		size_src++;
	if (size_dest >= size)
		return (size_dest + size_src);
	index = size_dest;
	jindex = 0;
	while (src[jindex] != '\0' && index + 1 < (size))
	{
		dst[index] = src[jindex];
		index++;
		jindex++;
	}
	dst[index] = '\0';
	return (size_dest + size_src);
}

// int	main()
// {
// 	char	potato[] = "aaaaa";
// 	char	beanss[] = "aaaac";
// 	printf("%zu\n", ft_strlcat(potato, beanss, 10));
// 	return (0);
// }