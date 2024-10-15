/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:11:49 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/15 18:15:54 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
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

	size = ft_strlen(str);

	i = 0;	
	while (str[i] != size - 1)
	{
		if ((str[i] == search_str) || (str[i] == search_str))
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

int	main()
{
	char	potato[] = "ddddgabcdef";
	int		letter = 'a';

	printf("batata: %s", ft_strrchr(potato, letter));
	printf("\nfunc original: %s ", strrchr(potato, letter));
}