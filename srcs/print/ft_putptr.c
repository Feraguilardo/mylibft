/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:06:01 by fer               #+#    #+#             */
/*   Updated: 2023/11/14 15:29:17 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

static int	ft_hex_pointer(unsigned long long ptr)
{
	int		aux;
	char	*hex;

	aux = 0;
	hex = "0123456789abcdef";
	if (ptr >= 16)
	{
		aux = ft_hex_pointer(ptr / 16);
		if (aux < 0)
			return (-1);
		aux = ft_hex_pointer(ptr % 16);
		if (aux < 0)
			return (-1);
	}
	else
	{
		aux = ft_putchar(hex[ptr]);
		if (aux < 0)
			return (-1);
	}
	return (1);
}

int	ft_putptr(unsigned long long ptr)
{
	int	len;
	int	aux;

	aux = ft_putstr("0x");
	if (aux < 0)
		return (-1);
	len = aux;
	if (ptr == 0)
	{
		len += ft_putchar('0');
		aux = len;
		if (aux < 0)
			return (-1);
	}
	else
	{
		aux = ft_hex_pointer(ptr);
		if (aux < 0)
			return (-1);
		len += ft_len_ptr(ptr);
	}
	return (len);
}
