/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:22:06 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 11:03:33 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Fill with size bytes of zero the memory of str 
 * Param. #1: The string on which to operate 
 * Param. #2: The number of bytes 
 * Return Value: None */

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	ft_memset(str, 0, size);
}
