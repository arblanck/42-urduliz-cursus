/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:29:18 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/21 14:16:08 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(needle);
	if (!*needle)
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i + l <= len)
	{
		if (!ft_strncmp((&haystack[i]), needle, l))
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
