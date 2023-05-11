/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 09:58:46 by arblanco          #+#    #+#             */
/*   Updated: 2023/05/11 10:29:02 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Applies the function ’f’ to each character of the ’s’ to create a new string
 * (with malloc(3)) resulting from successive applications of ’f’. 
 * Param. #1: The string on which to iterate. 
 * Param. #2: The function to apply to each character. 
 * Return Value: The string created from the successive applications of ’f’. 
 * NULL if the allocation fails. */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len_s;
	size_t	i;

	if (s == 0 || f == 0)
		return (0);
	len_s = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_s + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
