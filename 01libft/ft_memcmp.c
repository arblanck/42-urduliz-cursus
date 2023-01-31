/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:08:44 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 14:23:11 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:
 * Compares byte string s1 against byte string s2.
 * Both strings are assumed to be size bytes long. 
 * Param. #1: Memory area s1 
 * Param. #2: Memory area s2 
 * Param. #3: The number of bytes 
 * Return Value: Returns 0 if the two strings are identical, 
 * other-wise returns the difference between the first two differing bytes. 
 * Zero-length strings are always identical. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
