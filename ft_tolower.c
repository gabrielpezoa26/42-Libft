/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:58:21 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/21 14:21:23 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main()
// {
// 	char	potatooo = 'A';
// 	printf("%c", ft_tolower(potatooo));
// 	// printf("%d", tolower(str));
// 	return (0);
// }