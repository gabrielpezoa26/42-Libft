/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:57:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/22 16:39:32 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	qto_cabe;

	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	qto_cabe = (size_dest + size_src) + 1;
	if (qto_cabe > dstsize)
		return (dstsize);
	ft_memcpy(dst, src, dstsize);
	qto_cabe = '\0';
	return (size_dest + size_src);
}

int	main()
{
	char	potato[] = "aaaaa";
	char	beanss[] = "aaaac";
	printf("%zu\n", ft_strlcat(potato, beanss, 10));
	return (0);
}