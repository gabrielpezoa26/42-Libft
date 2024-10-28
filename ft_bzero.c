/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:21:18 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/28 20:23:14 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)s;
	while (i < n)
	{
		x[i] = 0;
		i++;
	}
}

// int	main()
// {
// 	char	potato[] = "aaaaaaaaaa";
// 	ft_bzero(potato, 5);
// 	printf("%s \n", potato);
// }