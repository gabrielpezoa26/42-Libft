/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:46:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/27 16:34:06 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_calculate_lennn(int mango_loko)
{
	size_t	size;

	size = 0;
	if (mango_loko == 0)
		return (1);
	else if (mango_loko < 0)
	{
		mango_loko *= -1;
		size++;
	}
	while (mango_loko > 0)
	{
		mango_loko = mango_loko / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*beans;
	int		index;

	beans = (char *)malloc((ft_calculate_lennn(n) + 1) * sizeof(char));
	if (n < 0)
		beans[0] = '-';
	index = 0;

	beans[ft_calculate_lennn] = '\0';
	return (beans);
}

int	main()
{
	int potato = 69;

	printf("%s \n", ft_itoa(potato));
	return (0);
}