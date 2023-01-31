/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:19:11 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 13:53:11 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Scans the initial size bytes of string str for the first instance of c
 * Param. #1: Memory area str 
 * Param. #2: A character to search 
 * Param. #3: The number of bytes 
 * Return Value: A pointer to the byte located, 
 * or NULL if no such byte exists within size bytes */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
