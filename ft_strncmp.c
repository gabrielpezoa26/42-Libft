/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:31:33 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/19 18:28:24 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
    char potato[] = "aaaaz";
    char beanss[] = "aaaaa";
    printf("potato: %d", ft_strncmp(potato, beanss, 5));
	printf("\n func original: %d \n", strncmp(potato, beanss, 5));
    return 0;
}