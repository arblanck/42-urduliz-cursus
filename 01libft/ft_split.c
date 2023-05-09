/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:21:34 by arblanco          #+#    #+#             */
/*   Updated: 2023/05/09 19:26:00 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Allocates (with malloc(3)) and returns an array of strings obtained by 
 * splitting ’s’ using the character ’c’ as a delimiter. The array must be 
 * ended by a NULL pointer. 
 * Param. #1: The string to be split. 
 * Param. #2: The delimiter character. 
 * Return Value: The array of new strings resulting from the split. 
 * NULL if the allocation fails. */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_word_len(char const *s, char c, int pos)
{
	size_t	len_s;

	len_s = 0;
	while (s[pos] != c && s[pos] != '\0')
	{
		len_s++;
		pos++;
	}
	return (len_s);
}

static size_t	ft_num_word(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
		{
			words++;
			while (s[i] != 0 && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char	**ft_err_free(char **list)
{
	size_t	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	num;
	char	**output;

	num = ft_num_word(s, c);
	output = (char **)malloc(sizeof(char *) * (num + 1));
	if (output == 0)
		return (0);
	i = 0;
	j = 0;
	while (i < num)
	{
		while (s[j] == c)
			j++;
		len = ft_word_len(s, c, j);
		output[i] = ft_substr(s, j, len);
		if (output[i] == 0)
			return (ft_err_free((char **)output));
		j = j + len;
		i++;
	}
	output[i] = 0;
	return (output);
}
