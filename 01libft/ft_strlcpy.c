/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:41:24 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/18 17:05:07 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Copies up to size -1 characters from the NULL-terminated string src to dest,
 *  NULL-terminating the result
 *  Param. #1: Destination array 
 *  Param. #2: String to be copied
 *  Param. #3:  Number of characters to be copied from src
 *  Return Value: Total length of the string to create (length of src) */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == '\0')
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
