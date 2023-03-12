/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:21:34 by arblanco          #+#    #+#             */
/*   Updated: 2023/03/12 11:27:05 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_word_len(char const *s, char c, int pos)
{
	int	len;

	len = 0;
	while (s[pos] != c && s[pos] != '\0')
	{
		len++;
		pos++;
	}
	return (len);
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

static char	**err_free(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	**result;

	count = ft_num_word(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < count)
	{
		while (s[k] == c)
			k++;
		j = ft_word_len(s, c, k);
		result[i] = ft_substr(s, k, j);
		if (result[i] == NULL)
			return (err_free((char **)result));
		k = k + j;
		i++;
	}
	result[i] = 0;
	return (result);
}
