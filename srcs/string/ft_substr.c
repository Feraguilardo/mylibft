/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:36:33 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:26:42 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
		i++;
	if (i <= start)
		len = 0;
	else if ((start + len) >= i)
		len = i - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*Crea un nuevo STR con un Inicio y un LEN*/
/*
// int	main(int argc, char **argv)
// {
// 	const char		*str;
// 	unsigned int	start;
// 	size_t			len;
// 	char			*substr;

// 	if (argc == 0)
// 	{
// 		return (0);
// 	}
// 	str = argv[1];
// 	start = atoi(argv[2]);
// 	len = atoi(argv[3]);
// 	printf("str = %s\nstart = %d\nlen = %zu\n", str, start, len);
// 	substr = ft_substr(str, start, len);

// 	printf("ft_substr = %s\n", substr);
// 	free(substr);
// 	return (0);
// }
*/
