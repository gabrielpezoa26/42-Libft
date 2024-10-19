/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:00:16 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/19 17:59:25 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlcpy(char *dest, const char *src, size_t n)
{
	int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[n - 1] = '\0';
	return (dest);
}

// int	main()
// {
// 	char	potato[] = "batata";
// 	char 	caneta[] = "";

// 	ft_strlcpy(caneta, potato, 3);
// 	printf("%s  \n", caneta);
// 	//printf("Length of caneta: %zu\n", strlen(caneta));  // teste

// 	return (0);
// }