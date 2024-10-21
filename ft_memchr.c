/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:03:44 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 11:58:47 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*y;
	unsigned int	i;

	i = 0;
	y = (unsigned char *)str;
	while (i < n)
	{
		if (y[i] == c)
			return ((char *)&y[i]);
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