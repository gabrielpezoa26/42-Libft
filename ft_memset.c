/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:35:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 14:11:30 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void	*ptr, int value, size_t num)
{
	unsigned int	i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)ptr;
	while (i < num)
	{
		x[i] = value;
		i++;
	}
	return (ptr);
}
/*
int	main()
{
	char	potato[] = "fsfsf dfssdsfg";
	ft_memset(potato, '\0', 5);
	printf("%s", potato);
}*/