/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:45:59 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:28 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len -1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/* Copia len de bytes de SRC a DST */
/*
// int	main(int argc, char **argv)
// {
// 	char	*mem1;
// 	char	*mem2;

// 	if (argc != 4)
// 		return (0);
// 	mem1 = ft_memmove(argv[1], argv[2], atoi(argv[3]));
// 	mem2 = memmove(argv[1], argv[2], atoi(argv[3]));
// 	printf("ft_memmove ==> %s\n", mem1);
// 	printf("memmove ==> %s\n", mem2);
// 	return (0);
// }
*/
