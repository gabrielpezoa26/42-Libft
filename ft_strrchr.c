/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:11:49 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/15 17:54:32 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strrchr(const char *str, int search_str)
{
	int	i;
	int	size;

	ft_strlen(search_str);

	i = 0;	
	while (str[i] != '\0')
	{
		if ((str[i] == search_str) || (str[i] == search_str))
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

int	main()
{
	int		letter = 'a';
	char	*potato = "ddddgabcdef";

	printf("dasdsadsa: %s", ft_strrchr(potato, letter));
//	printf("\nfunc original: %s ", strrchr(potato, letter));
}