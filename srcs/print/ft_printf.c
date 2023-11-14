/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:00:04 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:29:11 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		aux;

	if (!str)
		return (-1);
	va_start(args, str);
	i = 0;
	len = 0;
	aux = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			aux = ft_checkprint(args, str[++i]);
		else
			aux = ft_putchar(str[i]);
		if (aux < 0)
			return (-1);
		len = len + aux;
		i++;
	}
	va_end(args);
	return (len);
}

// int	main(int argc, char **argv)
// {
// 	if (argc < 0)
// 		return (0);
// 	ft_printf("%s\n", argv[1]);
// 	return (0);
// }
