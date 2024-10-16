/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:53:14 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/15 21:46:12 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;

	i = 0;
	if (*str < 9)
	{
		i -= 48;
		return (i);
	}
	return (str[i]);
}

int	main(void)
{
    char	potato[] = "6";

	printf("%d", ft_atoi(potato));
	printf("\n%d  \n", atoi(potato));
}