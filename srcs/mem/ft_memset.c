/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:25:50 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:28 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (i < len)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*Escribe C en STR len veces*/
/*
int	main(int argc, char **argv)
{
	char	*mem1;
	char	*mem2;

	if (argc != 4)
		return (0);
	mem1 = ft_memset(argv[1], argv[2][0], atoi(argv[3]));
	mem2 = memset(argv[1], argv[2][0], atoi(argv[3]));
	printf("ft_memset => %s\n", mem1);
	printf("memset => %s\n", mem2);
	return (0);
}
*/
