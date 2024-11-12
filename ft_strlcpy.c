/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:00:16 by gcesar-n          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/31 13:37:21 by gcesar-n         ###   ########.fr       */
=======
/*   Updated: 2024/10/31 20:14:34 by gabriel          ###   ########.fr       */
>>>>>>> a4d5546508bff810d9deb60d871ba6555c75a9b4
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
