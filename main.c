/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:26:12 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:26 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include "ft_printf.h"

int main(int argc, char **argv)
{
	size_t	num_elements;
	size_t	element_size;
	int		cmp;
	int		*mem1;
	int		*mem2;

	if (argc != 2)
		return (0);
	num_elements = atoi(argv[1]);
	element_size = sizeof(int);
	mem1 = (int *)ft_calloc(num_elements, element_size);
	mem2 = (int *)calloc(num_elements, element_size);
	if(!mem1 || !mem2)
		return (0);
	cmp = memcmp(mem1, mem2, (atoi(argv[1]) * element_size));
	printf("MEMCMP: %d\n", cmp);
	if (cmp != 0)
	{
		free(mem1);
		free(mem2);
		printf("TODO MAL\n");
		return (0);
	}
	free(mem1);
	free(mem2);
	ft_printf("TODO OK\n");
	return (0);
}
