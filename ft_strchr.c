/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/28 20:30:53 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i] != '\0') || s[i] == (char)c)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
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