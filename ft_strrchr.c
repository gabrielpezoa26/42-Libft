/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:11:49 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/28 20:31:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int	main()
// {
// 	char	potato[] = {'d', 'd', 'd', 'd', 'g', 'a' ,'b',12, 'd', 'e' , 11};
// 	int		letter = 'a';

// 	printf("batata: %s", ft_strrchr(potato, letter));
// 	printf("\nfunc original: %s ", strrchr(potato, letter));
//}