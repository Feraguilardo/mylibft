/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:43:28 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:26 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] != 0)
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*Compara 2STR con SIZE*/
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
