/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:53:14 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/17 16:58:36 by gcesar-n         ###   ########.fr       */
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
		i++;
		return (i);
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
int	ft_atoi(const char *str)
{

	int	result;
	int	sign;
	int	i;

	if(str[0] == '-')
		sign = -1;
	while(str[i] != '\0')
	{
		result = result * 10 + str[i] + '\0';
		i++;
	}
	return (result * sign);
}

int	main(void)
{
    char	potato[] = "46";

	printf("func 42: %d \n", ft_atoi(potato));
	printf("func original: %d  \n", atoi(potato));
}