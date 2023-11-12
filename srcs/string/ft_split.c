/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fer <fer@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:02:42 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/12 17:37:20 by fer              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_c_wordssplit(char const *s, char c)
{
	int	i;
	int	j;
	int	b;

	i = 0;
	j = 0;
	b = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			b = 1;
		if (s[i] == c && b == 1)
		{
			j++;
			b = 0;
		}
		i++;
	}
	if (b == 1)
		j++;
	return (j);
}

static size_t	ft_lensplit(char const *s, char c, int i)
{
	size_t	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static void	*ft_freesplit(char **strsplit)
{
	int	j;

	j = 0;
	while (strsplit[j] != NULL)
	{
		free(strsplit[j]);
		j++;
	}
	free(strsplit);
	return (NULL);
}

static char **ft_create_words(char const *s, char c, char **strsplit)
{
	int		i;
	int		list;
	size_t	lenstr;

	i = 0;
	list = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			lenstr = ft_lensplit(s, c, i);
			strsplit[list++] = ft_substr(s, i, lenstr);
			if (!strsplit[list - 1])
				return (ft_freesplit(strsplit));
			i = i + lenstr;
		}
	}
	strsplit[list] = NULL;
	return (strsplit);
}

char	**ft_split(char const *s, char c)
{
	char	**strsplit;

	if (!s)
		return (NULL);
	strsplit = (char **)malloc(sizeof(char *) * (ft_c_wordssplit(s, c) + 1));
	if (!strsplit)
		return (NULL);
	return (ft_create_words(s, c, strsplit));
}
/*Divido un STR en diferentes STRS por un C*/
/*EX: HOLA MUNDO [A]=> "HOL\0" " MUNDO\0"*/
/*
// int	main(int argc, char **argv)
// {
// 	char	**strsplit;
// 	int		i;
// 	int		j;

// 	if (argc != 3)
// 		return (0);
// 	strsplit = ft_split(argv[1], argv[2][0]);
// 	j = 0;
// 	while (strsplit[j] != NULL)
// 	{
// 		i =0;
// 		while (strsplit[j][i] != '\0')
// 		{
// 			write (1, &strsplit[j][i], 1);
// 			i++;
// 		}
// 		write (1, "\n", 1);
// 		j++;
// 	}

// 	return (0);
// }
*/
