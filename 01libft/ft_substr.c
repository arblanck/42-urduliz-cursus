/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:42:51 by arblanco          #+#    #+#             */
/*   Updated: 2023/02/11 18:46:13 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Descripcion: 
 * Reserva (con malloc(3)) y devuelve una substring de la string ’s’. 
 * La substring empieza desde el índice ’start’ 
 * y tiene una longitud máxima ’len’. 
 * Param. #1: La string desde la que crear la substring 
 * Param. #2: El índice del caracter en ’s’ desde el que empezar la substring 
 * Param. #3: La longitud máxima de la substring 
 * Valor devuelto: La substring resultante. 
 * NULL si falla la reserva de memoria. */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sc;
	size_t	len_s;
	size_t	i;

	if (s == 0)
		return (0);
	len_s = ft_strlen(s);
	if (start > len_s)
		start = len_s;
	if (len > (len_s - start))
		len = len_s - start;
	sc = (char *)malloc(sizeof(char) * (len + 1));
	if (sc == 0)
		return (0);
	i = 0;
	while (i < len && i + start < len_s)
	{
		sc[i] = s[start + i];
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
