/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:21:10 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:48 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || !s1 || !s2)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if ((unsigned char) s1[i] - (unsigned char) s2[i] != 0)
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/* Compara dos STR un LEN y devuelve la diferencia entre ello */
/* Si S1 > S2 = + // S1 < S2 = - */
/*
// int main (int argc, char **argv)
// {
// 	int	str1;
// 	int	str2;

// 	if (argc != 4)
// 		return (0);
// 	str1 = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
// 	str2 = strncmp(argv[1], argv[2], atoi(argv[3]));
// 	printf("ft_strncmp; %d\n", str1);
// 	printf("strncmp; %d\n", str2);
// 	return (0);
// }
*/
