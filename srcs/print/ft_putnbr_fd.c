/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:50:08 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:29:14 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		write (fd, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 10)
	{
		n = n + '0';
		write (fd, &n, 1);
	}
}
/*Envia un INT a Imprimir por File Descriptor*/
/*FD{0, 1, 2} {3,.. OPEN/READ FILE}*/
/*
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (0);
// 	ft_putnbr_fd(atoi(argv[1]), 1);
// 	return (0);
// }
*/
