/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:21:18 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/19 19:12:11 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t len)
{
	unsigned int	i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)s;
	while (i < len)
	{
		x[i] = 0;
		i++;
	}
}

int	main()
{
	char	potato[] = "aaaaaaaaaa";
	ft_bzero(potato, 5);
	printf("%s \n", potato);
}