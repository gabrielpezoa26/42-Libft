/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:43:47 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/17 12:02:57 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*y;
	unsigned char	*u;

	y = (unsigned char *)str1;
	u = (unsigned char *)str2;
	i = 0;
	while (y[i] != '\0' && u[i] != '\0' && i < n)
	{
		if (y[i] < u[i])
			return (-1);
		else if (y[i] > u[i])
			return (1);
		i++;
	}
	return (0);
}

int	main()
{
	char	potato[] = "";
	char	beans[] = "";
	printf("func 42: %d  \n", ft_memcmp(potato, beans, 4));
	printf("func original: %d  \n", memcmp(potato, beans, 4));
	return (0);
}