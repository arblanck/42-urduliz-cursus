/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:32:20 by arblanco          #+#    #+#             */
/*   Updated: 2023/05/11 11:43:31 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:
 * Outputs the string ’s’ to the given file descriptor, followed by a new line. 
 * Param. #1: The string to output. 
 * Param. #2: The file descriptor on which to write. 
 * Return Value: - */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
