/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:06:34 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/14 10:42:59 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Check for an alphanumeric character; 
 * it is equivalent to [ft_isalpha] or [ft_isdigit]
 * Param. #1: The character to test
 * Return Value: returns zero if the character tests false 
 * and returns non-zero if the character tests true */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
