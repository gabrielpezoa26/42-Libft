/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 14:20:24 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)search_str)
			return ((char *)&str[i]);
		i++;
	}
	if (search_str == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

// int	main()
// {
// 	int		letter = 's';
// 	char	*potato = "ddddgabcdef";

// 	printf("resultado: %s", ft_strchr(potato, letter));
// 	printf("\nfunc original: %s \n", strchr(potato, letter));
// 	return (0);
// }