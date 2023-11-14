/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:38:38 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:51 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dst || !src)
		return (0);
	while (src[i] != '\0')
		i++;
	if (destsize != 0)
	{
		while (src[j] != '\0' && j < (destsize - 1))
		{
			dst[j] = src[j];
			++j;
		}
		dst[j] = '\0';
	}
	return (i);
}
/*COPIA SRC EN DST y devuelve LEN de SRC*/
/*
// int	main(int argc, char **argv)
// {
// 	size_t	str1;
// 	size_t	str2;

// 	if (argc != 4)
// 		return (0);
// 	str1 = (unsigned long)ft_strlcpy(argv[1], argv[2], atoi(argv[3]));
// 	str2 = (unsigned long)strlcpy(argv[1], argv[2], atoi(argv[3]));
// 	printf("ft_strlcpy ==> %lu\n", str1);
// 	printf("strlcpy ==> %lu\n", str2);
// 	return (0);
// }
*/
