/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:53:14 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/17 23:41:24 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	verify_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (1);
		i++;
	}
	return (0);
}

static int	verify_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			return (-1);
		else if (str[i] == '+')
			return (1);
		i++;
	}
	return (1);
}

static int	verify_digit(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	sign = verify_sign((char *)str);

	if (verify_non_printable((char *)str))
		return (0);
	else if (!verify_digit((char *)str))
		return (0);

	result = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char potato[] = "46";

	printf("func beans: %d\n", ft_atoi(potato));
	printf("func original: %d  \n", atoi(potato));
	return (0);
}