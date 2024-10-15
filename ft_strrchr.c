/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:11:49 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/15 17:12:17 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int search_str)
{
	int	i;
/// fazer um strlen e dps i - 1
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search_str)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

int	main()
{
	int		letter = '\0';
	char	*potato = "ddddgabcdef";

	printf("dasdsadsa: %s", ft_strrchr(potato, letter));
	printf("\nfunc original: %s ", strchr(potato, letter));
}