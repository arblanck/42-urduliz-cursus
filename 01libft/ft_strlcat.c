/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:35:27 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 10:42:59 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Concatenate the string strc to the end of dest. It will concatenate at 
 * most size - strlen(dest) -1 bytes, NULL-terminating the result
 * Param. #1: Destination array
 * Param. #2: String to be appended to dest
 * Param. #3: Maximum number of characters to be appended
 * Return Value: The initial length of dest plus the length of strc */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *strc, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (strc[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = strc[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(strc));
}
