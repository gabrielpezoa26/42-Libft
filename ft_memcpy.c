/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:41:26 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/16 16:01:05 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*y;
	unsigned char	*u;

	i = 0;
	y = (unsigned char *)dest;
	u = (unsigned char *)src;
	while (i < n)
	{
		y[i] = u[i];
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char	apple[] = "aaaaaaaa";
// 	char	potato[] = "fsfsf dfssdsfg";

// 	ft_memcpy(apple, potato, 5);
// 	//memcpy(apple, potato, 5);
// 	printf("pacoca:  %s \n", apple);
// }