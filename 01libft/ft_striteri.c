/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:47:35 by arblanco          #+#    #+#             */
/*   Updated: 2023/05/11 11:03:28 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Applies the function ’f’ to each character of the string passed as argument,
 * and passing its index as first argument. Each character is passed by address
 * to ’f’ to be modified if necessary. 
 * Param. #1: The string on which to iterate. 
 * Param. #2: The function to apply to each character. 
 * Return Value: - */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
