/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:13:08 by arblanco          #+#    #+#             */
/*   Updated: 2023/02/11 20:48:18 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string. 
 * Param. #1: The string to be trimmed. 
 * Param. #2: The reference set of characters to trim. 
 * Return Value: The trimmed string. NULL if the allocation fails. */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[start] != 0 && ft_strchr(set, s1[start]) != 0)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != 0)
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
