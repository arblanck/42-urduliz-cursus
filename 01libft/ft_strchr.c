/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:11:23 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 10:44:06 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Locates the first occurrence of c (converted to a char) in the string 
 * pointed to by str. The terminating null character is considered to be 
 * part of the string.
 * Param. #1: Pointer to string
 * Param. #2: Character to be located
 * Return Value: Return a pointer to the located character, 
 * or NULL if the character does not appear in the string */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && (char)c != *str)
		str++;
	if ((char)c == *str)
		return ((char *)str);
	return (0);
}		
