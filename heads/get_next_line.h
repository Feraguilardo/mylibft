/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:08:15 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 16:03:33 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*-- LIBS --*/
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"

/*-- BUFFER --*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*-- FUNCTIONS --*/
char	*get_next_line(int fd);
char	*ft_get_strjoin(char *str, char *buf);
char	*ft_read_line(char *str);
char	*ft_new_line(char *str);

#endif
