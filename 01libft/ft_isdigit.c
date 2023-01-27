/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:03:25 by arblanco          #+#    #+#             */
/*   Updated: 2022/12/03 10:22:30 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Check for a decimal digit character [0(48) - 9(57)]
 * Param. #1:The number to test
 * Return Value: returns zero if the character tests false 
 * and returns non-zero if the character tests true */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
