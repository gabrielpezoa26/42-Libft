/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:46:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/27 14:54:49 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_itoa(int n)
{
	int		result;
	int		digit;
	char	*y;

	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		digit = n / 10;
		//printf("%d", digit);
	}
	result = digit + '0';
	y = (char *)result;
	return (y);
}

int	main()
{
	int potato = 69;

	printf("%s \n", ft_itoa(potato));
}