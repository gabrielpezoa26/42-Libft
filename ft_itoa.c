/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:46:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/27 21:05:24 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_calculate_len(int mango_loko)
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

static void	ft_convert_to_str(char *string, unsigned int num, size_t len)
{
	size_t	index;

	index = len - 1;
	while (num > 0)
	{
		string[index] = (num % 10) + '0';
		num /= 10;
		index--;
	}
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	num;
	char			*potato;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_calculate_len(n);
	potato = (char *)malloc((len + 1) * sizeof(char));
	if (potato == 0)
		return (NULL);
	potato[len] = '\0';
	if (n == 0)
	{
		potato[0] = '0';
		return (potato);
	}
	if (n < 0)
	{
		potato[0] = '-';
		num = -n;
	}
	else
		num = n;
	ft_convert_to_str(potato, num, len);
	return (potato);
}
