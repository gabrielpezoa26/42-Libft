/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:57:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/31 13:24:11 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	i;
	size_t	j;

	size_dest = 0;
	size_src = 0;
	while (dst[size_dest] && size_dest < dstsize)
		size_dest++;
	while (src[size_src])
		size_src++;
	if (size_dest >= dstsize)
		return (size_dest + size_src);
	i = size_dest;
	j = 0;
	while (src[j] != '\0' && i + 1 < (dstsize))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size_dest + size_src);
}
