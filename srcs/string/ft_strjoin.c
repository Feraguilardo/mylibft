/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fer <fer@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:14:16 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/12 17:40:12 by fer              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * ((i + j) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		str[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
/*Une dos STRs en uno nuevo con MALLOC*/
/*
// int	main(int argc, char **argv)
// {
// 	char	*str;

// 	if (argc != 3)
// 		return (0);
// 	str = ft_strjoin(argv[1], argv[2]);
// 	printf("STRJOIN => %s\n", str);
// 	free(str);
// 	return (0);
// }
*/
