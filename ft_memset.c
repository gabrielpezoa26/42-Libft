/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:35:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/31 20:07:36 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)s;
	while (i < n)
	{
		x[i] = c;
		i++;
	}
	return (s);
}
