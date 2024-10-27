/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:46:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/27 15:46:23 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


static size_t	calculate_lennn(int *mango_loko)
{
	size_t	size;
	
	if (mango_loko < 0)
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
	int		result;
	int		digit;

	if (n < 0)
		n *= -1;
	while (n > 9)
		digit = n / 10;
		//printf("%d", digit);
	while (n >= 0 && n <= 9)
	{
		result = digit + '0';
		ft_itoa(digit);
	}
	return (result);
}

int	main()
{
	int potato = 69;

	printf("%s \n", ft_itoa(potato));
}