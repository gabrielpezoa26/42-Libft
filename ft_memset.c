/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:35:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/16 13:20:47 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void	*ptr, int value, size_t num)
{
	unsigned int	i;
	unsigned char	*phone;

	i = 0;
	phone = (unsigned char *)ptr;
	while (i < num)
	{
		phone[i] = value;
		i++;
	}
	return (ptr);
}

// int	main()
// {
// 	char	potato[] = "fsfsf dfssdsfg";
// 	ft_memset(potato, '\0', 5);
// 	printf("%s", potato);
// }