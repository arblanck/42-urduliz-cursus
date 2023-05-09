/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:18:40 by arblanco          #+#    #+#             */
/*   Updated: 2023/05/09 19:50:50 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:
 * Allocates (with malloc(3)) and returns a string representing the integer 
 * received as an argument. Negative numbers must be handled. 
 * Param. #1: The integer to convert. 
 * Return Value: The string representing the integer. 
 * NULL if the allocation fails. */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_number_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	numb;

	len = ft_number_len(n);
	numb = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	if (numb < 0)
	{
		str[0] = '-';
		numb = -numb;
	}
	if (numb == 0)
		str[0] = '0';
	str[len] = '\0';
	while (numb > 0)
	{
		len--;
		str[len] = (numb % 10) + '0';
		numb /= 10;
	}
	return (str);
}
