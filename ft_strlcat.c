/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:57:06 by gcesar-n          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/31 13:38:04 by gcesar-n         ###   ########.fr       */
=======
/*   Updated: 2024/10/31 20:14:33 by gabriel          ###   ########.fr       */
>>>>>>> a4d5546508bff810d9deb60d871ba6555c75a9b4
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	i;
	size_t	j;

	size_dest = 0;
	size_src = 0;
	while (dst[size_dest] && size_dest < size)
		size_dest++;
	while (src[size_src])
		size_src++;
	if (size_dest >= size)
		return (size_dest + size_src);
	i = size_dest;
	j = 0;
	while (src[j] != '\0' && i + 1 < (size))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size_dest + size_src);
}
