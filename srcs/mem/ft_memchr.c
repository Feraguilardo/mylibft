/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:30:24 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:25 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
/*Localiza C en STR con N => Puntero*/
/*
// int	main(int argc, char **argv)
// {
// 	int		cmp;
// 	char	*mem1;
// 	char	*mem2;

// 	if (argc != 4)
// 		return (0);
// 	mem1 = ft_memchr(argv[1], argv[2][0], ft_atoi(argv[3]));
// 	mem2 = memchr(argv[1], argv[2][0], ft_atoi(argv[3]));
// 	printf("ft_memchr => %s\n", mem1);
// 	printf("memchr => %s\n", mem2);
// 	cmp = strcmp(mem1, mem2);
// 	printf("strcmp: %d\n", cmp);
// 	if (mem1 && mem2)
// 	{
// 		if (cmp == 0)
// 			printf("TODO OK\n");
// 		else
// 			printf("ERROR\n");
// 	}
// 	else if (!mem1 && !mem2)
// 		printf("OK MEM1&2 =  NULL\n");
// 	else
// 		printf("UNA es NULL la otra NO\n");
// 	return (0);
// }
*/
