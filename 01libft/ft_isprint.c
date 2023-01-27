/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:36:07 by arblanco          #+#    #+#             */
/*   Updated: 2022/12/03 10:36:15 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Checks for any printable character [32 – 126]
 * Param. #1: The character to test
 * Return Value: returns zero if the character tests false 
 * and returns non-zero if the character tests true */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
