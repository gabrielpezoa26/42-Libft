/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:59:56 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/18 11:26:07 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *s1)
{
	int	count;

	count = 0;
	while (count != '\0')
	{
		count++;
	}
	return (count);
}

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned char	*d;
	unsigned char	*k;

	d = (unsigned char *)dest;
	k = (unsigned char *)src;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (size_dest > size_src)
		return (1);
	else if (size_src < size_dest)
	{
		while (i < num)
		{
			d[i] = k[i];
			i++;
		}
	}
	return (dest);
}

// int	main()
// {
// 	char	potato[4] = "aaaa";
// 	char	caneta[3] = "kkkk";

// 	ft_memmove(caneta, potato, 4);
// 	printf("func 42: %s   \n", caneta);

// 	memmove(caneta, potato, 4);
// 	printf("func. original %s\n", caneta);
// }