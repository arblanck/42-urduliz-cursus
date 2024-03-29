/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:47:08 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 10:59:01 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:
 * Fill with size bytes of c the memory of str 
 * Param. #1: The string on which to operate 
 * Param. #2: Value c (converted to an unsigned char) 
 * Param. #3: The number of bytes 
 * Return Value: A pointer to the memory area str */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}	
