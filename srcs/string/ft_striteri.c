/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:01:57 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:55 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* A un STR le aplicamos una funcion que lo modifique*/
/*
// static void ft_toupperiteri(unsigned int i, char *s)
// {
// 	int	j;

// 	j = 0;
// 	while (s[j] != '\0')
// 	{
// 		if (s[j] >= 'a' && s[j] <= 'z')
// 			s[j] -= 32;
// 		j++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	char	*str;

// 	if (argc != 2)
// 		return (0);
// 	str = argv[1];
// 	printf("Input => %s\n", str);
// 	ft_striteri(str, ft_toupperiteri);
// 	printf("ft_striteri => %s\n", str);
// 	return (0);
// }
*/
