/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/31 13:24:05 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
