/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:25:57 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 12:56:07 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Copies size bytes from string strc to string dest. 
 * The two strings may overlap; 
 * the copy is always done in a non-destructive manner. 
 * Param. #1: Memory area dest 
 * Param. #2: Memory area src 
 * Param. #3: The number of bytes 
 * Return Value: A pointer to the memory area dest */

#include "libft.h"

void	*ft_memmove(void *dest, const void *strc, size_t size)
{
	size_t	i;

	i = 0;
	if ((size_t)dest > (size_t)strc)
	{
		i = size - 1;
		while (i < size)
		{
			((char *)dest)[i] = ((char *)strc)[i];
			i--;
		}
	}
	else
		return (ft_memcpy(dest, strc, size));
	return (dest);
}
