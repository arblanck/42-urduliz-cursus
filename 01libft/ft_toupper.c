/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:50:37 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/14 10:51:28 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Converts a lower-case letter to the corresponding upper-case letter (-32)
 * Param. #1: The character to convert
 * Return Value: Returns uppercase equivalent */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c = c - 32;
	return (c);
}
