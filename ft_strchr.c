/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/15 21:23:48 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int search_str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (str[i] == search_str)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

int	main()
{
	int		letter = 'a';
	char	*potato = "ddddgabcdef";

	printf("dasdsadsa: %s", ft_strchr(potato, letter));
	//printf("\nfunc original: %s ", strchr(potato, letter));
}