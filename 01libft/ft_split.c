/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:21:34 by arblanco          #+#    #+#             */
/*   Updated: 2023/02/12 14:06:39 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_malloc_error(char **arr, int idx)
{
	int	i;

	i = -1;
	while (++i < idx)
		free(arr[i]);
	free(arr);
	return (NULL);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static size_t	ft_num_words(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	size_t	nwords;
	char	**split;
	size_t	index;
	size_t	i;

	nwords = ft_num_words(s, c);
	split = (char **)malloc(sizeof(char *) * (nwords + 1));
	if (split == 0)
		return (0);
	index = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
			split[index] = (char *)malloc(sizeof(char) * (ft_word_len(s, c) + 1));
			if (!split[index])
				return(ft_malloc_error(split, index));



	while (++i < nwords)
	{
		while (s[++k] && s[k] == c)
			continue ;
		start = k;
		while (s[k] && s[k] != c)
			k++;
		split[i] = ft_substr(s, start, k - start);
		if (!split[i])
			return (ft_malloc_error(split, i));
	}
	split[i] = NULL;
	return (split);
}
