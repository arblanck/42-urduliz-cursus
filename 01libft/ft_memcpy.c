/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:21:37 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 11:44:47 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *strc, size_t size)
{
	size_t	i;

	i = 0;
	if (dest == 0 && strc == 0)
		return (0);
	while (i < size)
	{
		((char *)dest)[i] = ((char *)strc)[i];
		i++;
	}
	return (dest);
}
