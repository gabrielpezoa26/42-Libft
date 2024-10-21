/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:59:56 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 16:56:00 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (((char *)src)[i] != '\0' && i < len)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	if (i <= len)
		((char *)dst)[i] = '\0';
	return (dst);
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