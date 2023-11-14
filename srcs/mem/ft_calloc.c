/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:04:26 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:24 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*objs;
	size_t			i;

	objs = (unsigned char *)malloc(count * size);
	if (!objs)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		objs[i] = '\0';
		i++;
	}
	return (objs);
}
/* Cuenta OBJS y llena la memoria de los objetos con \0 */
/*
// int main(int argc, char **argv)
// {
// 	size_t	num_elements;
// 	size_t	element_size;
// 	int		cmp;
// 	int		*mem1;
// 	int		*mem2;

// 	if (argc != 2)
// 		return (0);
// 	num_elements = atoi(argv[1]);
// 	element_size = sizeof(int);
// 	mem1 = (int *)ft_calloc(num_elements, element_size);
// 	mem2 = (int *)calloc(num_elements, element_size);
// 	if(!mem1 || !mem2)
// 		return (0);
// 	cmp = memcmp(mem1, mem2, (atoi(argv[1]) * element_size));
// 	printf("MEMCMP: %d\n", n);
// 	if (cmp != 0)
// 	{
// 		free(mem1);
// 		free(mem2);
// 		printf("TODO MAL\n");
// 		return (0);
// 	}
// 	free(mem1);
// 	free(mem2);
// 	printf("TODO OK\n");
// 	return (0);
// }
*/
