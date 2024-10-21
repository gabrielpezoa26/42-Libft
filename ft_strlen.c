/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:39:21 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 14:11:45 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

// int	main()
// {
// 	char potato[] = "fh";
// 	printf("func original: %ld\n", strlen(potato));
// 	printf("potato: %ld\n", ft_strlen(potato));
// }