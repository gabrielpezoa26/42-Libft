/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:38:28 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/26 19:36:06 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	size;
	void	*dest_ptr;
	char	*concat;
	int		i;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest_ptr = malloc(size);
	i = 0;
	*dest_ptr = s1;
	i = 0;
	while ()

	concat = '\0';
	return (dest_ptr);
}

int	main()
{
	const char	x[] = "aaa";
	const char	y[] = "bbb";

	printf("%s", ft_strjoin(x, y));
}



//	if (potato == NULL)
//		return (NULL);