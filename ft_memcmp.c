/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:43:47 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 19:05:13 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*y;
	unsigned char	*u;

	u = (unsigned char *)str2;
	y = (unsigned char *)str1;
	i = 0;
	while (i < n)
	{
		if (y[i] != u[i])
			return (y[i] - u[i]);
		i++;
	}
	return (0);
}

// int	main()
// {
// 	char	potato[] = "aaaaaz";
// 	char	beans[] =  "aaaaab";
// 	size_t	n = 6;	
// 	printf("func 42: %d  \n", ft_memcmp(potato, beans, n));
// 	printf("func original: %d  \n", memcmp(potato, beans, n));
// 	return (0);
// }