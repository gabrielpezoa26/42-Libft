/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:46:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/27 18:10:00 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
		mango_loko /= 10;
		size++;
	}
	return (size);
}

static void	ft_convert_to_str(char *str, unsigned int num, size_t len)
{
	size_t	index;

	index = len - 1;
	while (num > 0)
	{
		str[index] = (num % 10) + '0';
		num /= 10;
		index--;
	}
}

char	*ft_itoa(int n)
{
	char			*beans;
	size_t			len;
	unsigned int	num;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_calculate_lennn(n);
	beans = (char *)malloc((len + 1) * sizeof(char));
	if (!beans)
		return (NULL);
	beans[len] = '\0';
	if (n == 0)
	{
		beans[0] = '0';
		return (beans);
	}
	if (n < 0)
	{
		beans[0] = '-';
		num = -n;
	}
	else
		num = n;
	ft_convert_to_str(beans, num, len);
	return (beans);
}
