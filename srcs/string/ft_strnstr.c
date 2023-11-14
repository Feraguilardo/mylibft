/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:29:20 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:46 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	if (!haystack || !needle)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	size = 0;
	while (haystack[i] != '\0' && size < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0'
			&& (j + i) < len)
			j++;
		while (needle[size] != '\0')
			size++;
		if (j == size)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*Localiza donde aparece needle en haystack con un len*/
/*Devuelve el puntero donde se ha quedado de Haystack*/
/*
// int	main(int argc, char **argv)
// {
// 	char	*str1;
// 	char	*str2;

// 	if (argc != 4)
// 		return (0);
// 	str1 = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
// 	str2 = strnstr(argv[1], argv[2], atoi(argv[3]));
// 	printf("ft_strnstr: %s\n", str1);
// 	printf("ft_strnstr: %s\n", str2);
// 	return (0);
// }
*/
