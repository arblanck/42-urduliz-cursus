/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:29:18 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/21 14:29:04 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Locates the first occurrence of the NULL-terminated string needle in 
 * the string haystack, where not more than len characters are searched. 
 * Characters that appear after a `\0' character are not searched.  
 * Param. #1: String to be scanned
 * Param. #2: The small string to be searched in 'haystack' string
 * Param. #3: The maximum amount of characters to be searched
 * Return Value: A pointer to the first character of the first occurrence 
 * of little. NULL if the substring is not found. 
 * If 'needle' is an empty string, 'haystack' is returned */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(needle);
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i + l <= len)
	{
		if (ft_strncmp((&haystack[i]), needle, l) == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
