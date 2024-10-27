/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:46:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/27 18:04:47 by gabriel          ###   ########.fr       */
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
	if (beans == NULL)
		return (NULL);
	else if (n == 2147483647)
		return ("2147483648");
	else if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n = -n;
		beans[0] = '-';
	}
	index = ft_calculate_lennn(n) - 1;
	while (index >= 0)
	{
		beans[index] = (n % 10) + '0';
		n /= 10;
		index--;
	}
	beans[ft_calculate_lennn(n)] = '\0';
	return (beans);
}

 int	main()
{
	int potato = 68392;

	printf("%s \n", ft_itoa(potato));
	return (0);
}