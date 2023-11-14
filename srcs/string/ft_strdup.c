/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:05:59 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:55 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	if (!src)
		return (NULL);
	while (src[size] != '\0')
		size++;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (dest);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*Crea un nuevo STR desde un Inicio hasta un Len*/
/*
// int main(int argc, char **argv)
// {
// 	char *str[1];
// 	char	*d_strdup;
// 	char	*d_ft_strdup;
// 	int		n;

// 	str[0] = argv[1];
// 	d_strdup = strdup(argv[1]);
// 	d_ft_strdup = ft_strdup(str[0]);
// 	printf("Cadena original: %s\n", argv[1]);
// 	printf("strdup: %s\n", d_strdup);
// 	printf("ft_strdup: %s\n", d_ft_strdup);
// 	n = 0;
// 	while (argv[1][n] != (void *)'\0')
// 		n++;
// 	printf ("MEMCMP %d\n", memcmp(d_strdup, d_ft_strdup, n));
// 	free(d_strdup);
// 	free(d_ft_strdup);
// 	return 0;
// }
*/
