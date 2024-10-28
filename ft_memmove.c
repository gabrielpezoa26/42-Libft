/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:59:56 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/28 20:27:50 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*u;
	unsigned char	*y;
	unsigned int	i;

	y = (unsigned char *)dest;
	u = (unsigned char *)src;
	i = 0;
	if ((y == NULL) && (u == NULL))
		return (NULL);
	if ((y >= u) && (y < u + n))
	{
		while (n > 0)
		{
			y[n - 1] = u[n - 1];
			n--;
		}
	}
	while (i < n)
	{
		y[i] = u[i];
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char	potato[] = "AAaa";
// 	char	caneta[] = "kkKK";
// 	size_t	n = 2;
// 	ft_memmove(caneta, potato, n);
// 	printf("func 42: %s   \n", caneta);

// 	// memmove(caneta, potato, 4);
// 	// printf("func. original %s\n", caneta);
// }