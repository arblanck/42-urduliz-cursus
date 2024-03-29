/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:21:37 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 12:54:40 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Copies size bytes from memory area strc to memory area of dest. 
 * If dest and strc overlap, behavior is undefined. 
 * Param. #1: Memory area dest 
 * Param. #2: Memory area src 
 * Param. #3: The number of bytes 
 * Return Value: A pointer to the memory area dest */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *strc, size_t size)
{
	size_t	i;

	i = 0;
	if (dest == 0 && strc == 0)
		return (0);
	while (i < size)
	{
		((char *)dest)[i] = ((char *)strc)[i];
		i++;
	}
	return (dest);
}
