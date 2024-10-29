/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:57:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/29 14:04:12 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	index;
	size_t	jindex;

	size_dest = 0;
	size_src = 0;
	while (dst[size_dest] && size_dest < dstsize)
		size_dest++;
	while (src[size_src])
		size_src++;
	if (size_dest >= dstsize)
		return (size_dest + size_src);
	index = size_dest;
	jindex = 0;
	while (src[jindex] != '\0' && index + 1 < (dstsize))
	{
		dst[index] = src[jindex];
		index++;
		jindex++;
	}
	dst[index] = '\0';
	return (size_dest + size_src);
}
