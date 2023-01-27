/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:40:15 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/18 18:16:39 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Locates the last occurrence of c (converted to a char) in the string 
 * pointed to by str. The terminating null character is considered 
 * to be part of the string.
 * Param. #1: Pointer to string
 * Param. #2: Character to be located
 * Return Value: Return a pointer to the located character, 
 * or NULL if the character does not appear in the string */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if ((char)c == str[len])
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}
