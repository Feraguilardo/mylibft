/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:07:43 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/08 12:54:34 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read_str(int fd, char *str)
{
	char	*buffer;
	int		nb_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	nb_read = 1;
	if (!buffer)
		return (free(str), str = NULL, NULL);
	while (nb_read > 0 && !ft_get_strchr(str, '\n'))
	{
		nb_read = read(fd, buffer, BUFFER_SIZE);
		if (nb_read > 0)
		{
			buffer[nb_read] = '\0';
			str = ft_get_strjoin(str, buffer);
		}
	}
	if (nb_read < 0)
		return (free(buffer), free(str), str = NULL, NULL);
	return (free(buffer), str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	str = ft_read_str(fd, str);
	if (!str)
		return (free(str), str = NULL, NULL);
	line = ft_read_line(str);
	if (!line)
		return (free(str), str = NULL, NULL);
	str = ft_new_line(str);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	int		i;
// 	char	*line;

// 	fd = open("text.txt", O_RDONLY);
// 	if (fd < 0)
// 		return (0);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		line = get_next_line(fd);
// 		printf("line [%02d]: %s\n", i, line);
// 		free (line);
// 		i++;
// 	}
// 	close(fd);
// 	return (0);
// }
