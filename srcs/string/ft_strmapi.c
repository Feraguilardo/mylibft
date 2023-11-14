/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:56:09 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:49 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	size_t			len;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len +1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(j, s[i]);
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
/* Aplica una funcion a un STR y crea un nuevo STR*/
/*
// static char ft_strchange_mapi(unsigned int i, char s)
// {

// 	if (s >= 'a' && s <= 'z')
// 			return (s - 32);
// 	return (s);
// }

// int	main(int argc, char **argv)
// {
// 	char	*str;

// 	if (argc != 2)
// 		return (0);
// 	str = ft_strmapi(argv[1], ft_strchange_mapi);
// 	printf("Input => %s\n", argv[1]);
// 	printf("ft_strmapi => %s\n", str);
// 	free(str);
// 	return (0);
// }
*/
