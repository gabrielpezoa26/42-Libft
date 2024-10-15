/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:57:06 by gabriel           #+#    #+#             */
/*   Updated: 2024/10/15 13:29:42 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dest, char *src, size_t size)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (i + j);
}

// int	main()
// {
// 	char	potato[] = "aaaaa";
// 	char	beans[] = "aaaaac";
// 	printf("%d", ft_strlcat(potato, beans, 3));
// 	return (0);
// }