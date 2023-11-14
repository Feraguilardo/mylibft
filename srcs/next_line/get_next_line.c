/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:07:43 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:17 by feaguila         ###   ########.fr       */
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
	static char	*str[INT_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	str[fd] = ft_read_str(fd, str[fd]);
	if (!str[fd])
		return (free(str[fd]), str[fd] = NULL, NULL);
	line = ft_read_line(str[fd]);
	if (!line)
		return (free(str[fd]), str[fd] = NULL, NULL);
	str[fd] = ft_new_line(str[fd]);
	return (line);
}

// int	main(void)
// {
// 	int		fd[2];
// 	int		i;
// 	char	*line;

// 	fd[0] = open("text.txt", O_RDONLY);
// 	fd[1] = open("text1.txt", O_RDONLY);
// 	if (fd < 0)
// 		return (0);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		line = get_next_line(fd[0]);
// 		printf("line [%02d]: %s\n", i, line);
// 		free (line);
// 		line = get_next_line(fd[1]);
// 		printf("line [%02d]: %s\n", i, line);
// 		free (line);
// 		i++;
// 	}
// 	close(fd[0]);
// 	close(fd[1]);
// 	return (0);
// }
