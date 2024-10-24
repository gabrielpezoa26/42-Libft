/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:51:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/10/23 22:46:21 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*beans;
	size_t	potato;

	potato = nitems * size;
	beans = malloc(potato);
	if (beans == NULL)
		return (NULL);
	ft_memset(beans, 0, potato);
	return (beans);
}

/*int main() 
{
    int *ptr = (int *)ft_calloc(5, sizeof(int));
    free(ptr);
    return 0;
}*/