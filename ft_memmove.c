/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:59:56 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/23 14:41:59 by gcesar-n         ###   ########.fr       */
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
	while (i < numBytes)
	{
		y[i] = u[i];
		i++;
	}
	return (dest_str);
}

// int	main()
// {
// 	char	potato[10] = NULL;
// 	char	caneta[10] = NULL;
// 	size_t	numBytes = 2;
// 	ft_memmove(caneta, potato, numBytes);
// 	printf("func 42: %s   \n", caneta);

// 	// memmove(caneta, potato, 4);
// 	// printf("func. original %s\n", caneta);
// }