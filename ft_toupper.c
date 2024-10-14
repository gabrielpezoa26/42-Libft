/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:48:08 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/14 15:00:34 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_toupper(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] += 32;
		i++;
	}
	return (str[i]);
}

int	main()
{
	char	potato[] = "aaaaaa";
	printf("%c", ft_toupper(potato));
	return (0);
}