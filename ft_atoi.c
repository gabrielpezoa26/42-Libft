/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:53:14 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/17 20:48:43 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	verify_non_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == '\0')
			return (i);
		i++;
	}
	return (i);
}

static int	verify_sign(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] < 0)
			return ('-');
		i++;
	}
	return (1);
}

static int	verify_digit(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i]  < 48 && str[i] > 57)
			return (0);
		i++;
	}
	return (*str);
}
int	ft_atoi(const char *str)
{

	int	result;
	int	sign;
	int	i;

	verify_non_printable(str);
	verify_sign(str);
	verify_digit(str);
}

int	main(void)
{
	char potato[] = "46";

	ft_atoi(potato);
	return (0);

	/*
		char	potato[] = "46";

		printf("func 42: %d \n", ft_atoi(potato));
		printf("func original: %d  \n", atoi(potato));
		return (0);*/
}