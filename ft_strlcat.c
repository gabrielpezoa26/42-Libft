/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:57:06 by gabriel           #+#    #+#             */
/*   Updated: 2024/10/15 11:22:33 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dest, char *src)
{
	int		i;
	int		j;
	int		result;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	result = i + j;
	result += '\0';
	return (result);
}

int	main()
{
	char	potato[] = "";
	char	beans[] = "";
	printf("%d", ft_strlcat(potato, beans));
	return (0);
}