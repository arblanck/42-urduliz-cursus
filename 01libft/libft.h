/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:03:38 by arblanco          #+#    #+#             */
/*   Updated: 2023/01/31 11:27:59 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *strc, size_t size);
size_t	ft_strlcat(char *dest, const char *strc, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t size);
void	*ft_memset(void *str, int c, size_t size);
void	ft_bzero(void *str, size_t size);
void	*ft_memcpy(void *dest, const void *strc, size_t size);

#endif
