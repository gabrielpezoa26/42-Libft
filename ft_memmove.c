/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:59:56 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/23 16:35:29 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	unsigned char	*u;
	unsigned char	*y;
	unsigned int	i;

	y = (unsigned char *)dest_str;
	u = (unsigned char *)src_str;
	i = 0;
	if ((y == NULL) && (u == NULL))
		return (NULL);
	if ((y >= u) && (y < u + numBytes))
	{
		while (numBytes > 0)
		{
			y[numBytes - 1] = u[numBytes - 1];
			numBytes--;
		}
	}
	while (i < numBytes)
	{
		y[i] = u[i];
		i++;
	}
	return (dest_str);
}

// int	main()
// {
// 	char	potato[] = "AAaa";
// 	char	caneta[] = "kkKK";
// 	size_t	numBytes = 2;
// 	ft_memmove(caneta, potato, numBytes);
// 	printf("func 42: %s   \n", caneta);

// 	// memmove(caneta, potato, 4);
// 	// printf("func. original %s\n", caneta);
// }