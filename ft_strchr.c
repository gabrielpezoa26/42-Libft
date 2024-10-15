/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/15 17:25:39 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int search_str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0') || (str[i] == search_str))
	{
		if (str[i] == search_str)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	int		letter = '\0';
// 	char	*potato = "ddddgabcdef";

// 	printf("dasdsadsa: %s", ft_strchr(potato, letter));
// 	printf("\nfunc original: %s ", strchr(potato, letter));
// }