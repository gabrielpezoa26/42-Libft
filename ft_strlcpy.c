/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:00:16 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/18 11:17:11 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlcpy(char *dest, char *src, int n)
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