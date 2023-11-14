/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:22:21 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:27 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((void *)dst);
}
/*Copia Memoria de STR A DST*/
/*
// int	main(int argc, char **argv)
// {
// 	int	mem1;
// 	int	mem2;

// 	if (argc != 4)
// 		return (0);
// 	mem1 = ft_memcmp(argv[1], argv[2], atoi(argv[3]));
// 	mem2 = memcmp(argv[1], argv[2], atoi(argv[3]));
// 	printf("ft_memcmp: %d\n", mem1);
// 	printf("memcmp: %d\n", mem2);
// 	return (0);
// }
*/
