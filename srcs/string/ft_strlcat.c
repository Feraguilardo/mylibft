/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:05:35 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:52 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	l_src;
	size_t	l_dst;
	size_t	i;

	l_src = 0;
	l_dst = 0;
	i = 0;
	if (!dst || !src)
		return (0);
	while (src[l_src] != '\0')
		l_src++;
	while (dst[l_dst] != '\0')
		l_dst++;
	if (destsize <= l_dst)
		l_src = l_src + destsize;
	else
		l_src = l_dst + l_src;
	while (src[i] != '\0' && (l_dst + 1) < destsize)
	{
		dst[l_dst] = src[i];
		i++;
		l_dst++;
	}
	dst[l_dst] = '\0';
	return (l_src);
}
/*Concatena dos STR pero devuelve LENSRC + LENDST*/
/*
// int	main(int argc, char **argv)
// {
// 	size_t	str1;
// 	size_t	str2;

// 	if (argc != 4)
// 		return (0);
// 	str1 = (unsigned long)ft_strlcat(argv[1], argv[2], atoi(argv[3]));
// 	str2 = (unsigned long)strlcat(argv[1], argv[2], atoi(argv[3]));
// 	printf("ft_strlcat ==> %lu\n", str1);
// 	printf("strlcat ==> %lu\n", str2);
// 	return (0);
// }
*/
