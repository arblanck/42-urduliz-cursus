/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 09:53:27 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/14 10:44:18 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Check for a alpabetic character [A(65) - Z(90) or a(97) - z(122)]
 * Param. #1: The character to test
 * Return Value: returns zero if the character tests false 
 * and returns non-zero if the character tests true */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
