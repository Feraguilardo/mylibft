/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:33:49 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:22 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}
/* Escribe N /0 -> STRING, Si N es 0 NO HACE NADA */
/*
// int	main(int argc, char **argv)
// {
// 	char	*str[2];
// 	char	*strbzero;
// 	char	*strft_bzero;
// 	int		lenbzero;
// 	int		lenft_bzero;
// 	int		i;

// 	if (argc == 0)
// 	{
// 		write(1, "\n", 1);
// 		return (0);
// 	}
// 	str[0] = argv[1];
// 	str[1] = argv[2];
// 	strbzero = argv[1];

// 	i = 0;
// 	lenbzero = 0;
// 	lenft_bzero = 0;

// 	printf("STRBZERO => %s\n", strbzero);
// 	printf("STRFT_BZERO => %s\n", str[0]);

// 	while (strbzero[lenbzero])
// 		lenbzero++;
// 	while (str[0][lenft_bzero])
// 		lenft_bzero++;
// 	strbzero = bzero(argv[1], atoi(argv[2]));
// 	write (1, "bzero => ", 9);
// 	while (i <= lenbzero)
// 	{
// 		write (1, &strbzero[i], 1);
// 		i++;
// 	}
// 	write (1, "\n", 1);

// 	i = 0;
// 	ft_bzero(str[0], atoi(str[1]));
// 	write (1, "ft_bzero => ", 12);
// 	while (i <= lenft_bzero)
// 	{
// 		write (1, &str[0][i], 1);
// 		i++;
// 	}
// 	write (1, "\n", 1);
// 	return (0);
// }
*/
