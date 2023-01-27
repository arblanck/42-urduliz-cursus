/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:07:32 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/14 10:50:25 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Converts an upper-case letter to the corresponding lower-case letter (+32)
 * Param. #1: The character to convert
 * Return Value: Returns lowercase equivalent */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c = c + 32;
	return (c);
}
