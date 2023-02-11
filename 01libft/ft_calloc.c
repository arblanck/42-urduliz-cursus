/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:10:34 by arblanco          #+#    #+#             */
/*   Updated: 2023/02/11 17:31:27 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Allocates enough space for count objects that are size bytes of memory each,
 * and returns a pointer to the allocated memory. The allocated memory is 
 * filled with bytes of value zero.
 * Param. #1: Number of elements to be allocated 
 * Param. #2: Size of elements 
 * Return Value: A pointer to the allocated memory, 
 * or NULL if the request fails */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t number, size_t size)
{
	void	*poitr;

	poitr = malloc(number * size);
	if (poitr == 0)
		return (0);
	ft_bzero(poitr, number * size);
	return (poitr);
}
