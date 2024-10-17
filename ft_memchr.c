/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:03:44 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/17 14:41:29 by gcesar-n         ###   ########.fr       */
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
			//return (y);
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

int	main()
{
	char potato[] = "aaahaaaa";

    char *found = memchr(potato, 'h', 10);
    printf("func original: %s\n", found);
//////////////////////////////////////////////////////////
    char *found_42 = ft_memchr(potato, 'h', 10);
    printf("func 42: %s\n", found_42);
}