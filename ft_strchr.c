/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 12:01:27 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int search_str)
{
	int	i;

	i = ft_strlen(str);
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
// 	int		letter = '\0';
// 	char	*potato = "ddddgabcdef";

// 	printf("resultado: %s", ft_strchr(potato, letter));
// 	printf("\nfunc original: %s \n", strchr(potato, letter));
// 	return (0);
// }