/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:05:50 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:50 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}
/* Mira cuanto mide un STR */
/*
// int	main(int argc, char **argv)
// {
// 	size_t	str1;
// 	size_t	str2;

// 	if (argc != 2)
// 		return (0);
// 	str1 = (unsigned long)ft_strlen(argv[1]);
// 	str2 = (unsigned long)strlen(argv[1]);
// 	printf("ft_strlen ==> %lu\n", str1);
// 	printf("strlen ==> %lu\n", str2);
// 	return (0);
// }
*/
