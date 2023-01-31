/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:32:38 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 10:45:32 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Lexicographically compare the NULL-terminated strings s1 and s2, 
 * not more than size characters. Characters that appear after a `\0' 
 * character are not compared.
 * Param. #1: String1 to be compared 
 * Param. #2: String2 to be compared 
 * Param. #3: Maximum number of characters to be compared
 * Return Value: Return an integer greater than, equal to, or less than 0, 
 * according as the string s1 is greater than, equal to, 
 * or less than the string s2. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < size)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	return (0);
}
