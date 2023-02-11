/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:51:02 by arblanco          #+#    #+#             */
/*   Updated: 2023/02/11 19:21:39 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Descripcion: 
 * Reserva (con malloc(3)) y devuelve una nueva string, formada por 
 * la concatenación de ’s1’ y ’s2’. 
 * Param. #1: La primera string 
 * Param. #2: La string a añadir a ’s1’ 
 * Valor devuelto: La nueva string. NULL si falla la reserva de memoria. */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
