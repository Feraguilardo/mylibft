/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:26:18 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:29:10 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkprint(va_list args, char c)
{
	int	result;

	result = 0;
	if (c == '%')
		result = ft_putchar(c);
	else if (c == 'c')
		result = ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		result = ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		result = ft_putptr(va_arg(args, unsigned long long));
	else if (c == 's')
		result = ft_putstr(va_arg(args, char *));
	else if (c == 'u')
		result = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		result = ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		result = ft_putnbr_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (result);
}
