/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:14:38 by feaguila          #+#    #+#             */
/*   Updated: 2023/10/26 07:38:45 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*Escribe segun fd {0, 1, 2} {3,.. OPEN/READ FILE}*/
/*
// int	main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	return (0);
// }
*/

/*int	main()
{
// int	fd;

// //fd = open("archivo.txt", O_WRONLY);
// //printf("%d", fd);
// char	tmp[10];

// //read fd = 0 sin abrir antes un archivo, almacena a tmp
// la cantidad de 10 en este caso
// read(0, &tmp, 10);
// fd = open("archivo.txt", O_WRONLY);
// write(fd, tmp, 10);
// //ft_putchar_fd(tmp, fd);
// return (0);
}*/
