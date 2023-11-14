/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:48:33 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 16:05:26 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char) c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (unsigned char) c)
		return ((char *)&str[i]);
	return (0);
}
/*Cuando se encuentra C en STR devuelve desde la posicion del puntero*/
/*
// int	main(int argc, char **argv)
// {
// 	if (argc =! 3)
// 		return (0);
// 	printf("strchr: %s\n", ft_strchr(argv[1], atoi(argv[2])));
// 	return (0);
// }
*/
