/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:47:53 by arblanco          #+#    #+#             */
/*   Updated: 2023/05/11 12:36:06 by arblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: 
 * Outputs the integer ’n’ to the given file descriptor. 
 * Param. #1: The integer to output. 
 * Param. #2: The file descriptor on which to write. 
 * Return Value: - */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	numb;

	numb = n;
	if (numb < 0)
	{
		write(fd, "-", 1);
		numb = numb * -1;
	}
	if (numb >= 10)
	{
		ft_putnbr_fd(numb / 10, fd);
		ft_putchar_fd((numb % 10) + 48, fd);
	}
	else
		ft_putchar_fd(numb + 48, fd);
}
