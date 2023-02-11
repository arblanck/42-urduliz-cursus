/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:42:51 by arblanco          #+#    #+#             */
/*   Updated: 2023/02/11 19:55:04 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Allocates (with malloc(3)) and returns a substring from the string ’s’. 
 * The substring begins at index ’start’ and is of maximum size ’len’. 
 * Param. #1: The string from which to create the substring 
 * Param. #2: The start index of the substring in the string ’s’ 
 * Param. #3: The maximum length of the substring 
 * Return Value: The substring. NULL if the allocation fails. */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sc;
	size_t	len_s;
	size_t	i;

	if (s == 0)
		return (0);
	len_s = ft_strlen(s);
	if (start > len_s)
		start = len_s;
	if (len > (len_s - start))
		len = len_s - start;
	sc = (char *)malloc(sizeof(char) * (len + 1));
	if (sc == 0)
		return (0);
	i = 0;
	while (i < len && i + start < len_s)
	{
		sc[i] = s[start + i];
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
