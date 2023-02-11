/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:42:15 by arblanco          #+#    #+#             */
/*   Updated: 2023/02/11 17:31:47 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Allocates sufficient memory for a copy of the string str, does the copy, 
 * and returns a pointer to it. Memory for the new string is obtained with 
 * malloc, and can be freed with free. 
 * Param. #1: The string to duplicate 
 * Return Values: A pointer to the duplicated string. 
 * NULL if insufficient memory was available. */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char		*strc;
	size_t		size;

	size = ft_strlen(str) + 1;
	strc = malloc(size);
	if (strc == 0)
		return (0);
	ft_memcpy(strc, str, size);
	return (strc);
}
