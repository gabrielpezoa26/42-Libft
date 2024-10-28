/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:03:44 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/28 20:33:54 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*y;
	size_t			i;

	i = 0;
	y = (unsigned char *)s;
	c = (unsigned char)c;
	while (i < n)
	{
		if (y[i] == c)
			return ((unsigned char *)&y[i]);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char potato[] = "aaaahaajaaksssssssss";
// 	char	rice = 'k';
// 	size_t	n = 11;
//     char *found = memchr(potato, rice, n);
//     printf("func original: %s\n", found);
// //////////////////////////////////////////////////////////
//     char *found_42 = ft_memchr(potato, rice, n);
//     printf("func 42: %s\n", found_42);
// }