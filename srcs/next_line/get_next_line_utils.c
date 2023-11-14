/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:08:30 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 16:07:19 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_strjoin(char *str, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	if (!str)
	{
		str = malloc(sizeof(char));
		if (!str || !buffer)
			return (free(str), str = NULL, NULL);
		str[0] = '\0';
	}
	i = ft_strlen(str);
	j = ft_strlen(buffer);
	new_str = malloc(sizeof(char) * ((i + j) + 1));
	if (!new_str)
		return (free(str), str = NULL, NULL);
	i = -1;
	j = -1;
	while (str[++i] != '\0')
		new_str[i] = str[i];
	while (buffer[++j] != '\0')
		new_str[i++] = buffer[j];
	return (new_str[i] = '\0', free(str), new_str);
}

char	*ft_read_line(char *str)
{
	size_t	i;
	char	*new_str;

	if (!str[0])
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i++] == '\n')
			break ;
	}
	new_str = malloc(sizeof(char) * (i + 1));
	if (!new_str)
		return (NULL);
	i = -1;
	while (str[++i] != '\0' && str[i] != '\n')
		new_str[i] = str[i];
	if (str[i] == '\n')
		new_str[i++] = '\n';
	return (new_str[i] = '\0', new_str);
}

char	*ft_new_line(char *str)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (!str[i])
		return (free(str), str = NULL, NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!new_str)
		return (free(str), str = NULL, NULL);
	i++;
	j = 0;
	while (str[i] != '\0')
		new_str[j++] = str[i++];
	return (new_str[j] = '\0', free(str), str = NULL, new_str);
}
