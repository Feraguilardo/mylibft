/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:06:18 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:29:15 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_hex(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

int	ft_putnbr_hex(unsigned int nb, char *base)
{
	int	len;
	int	aux;

	len = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	if (nb >= 16)
	{
		aux = ft_putnbr_hex(nb / 16, base);
		if (aux < 0)
			return (-1);
		aux = ft_putnbr_hex(nb % 16, base);
		if (aux < 0)
			return (-1);
	}
	else
	{
		aux = ft_putchar(base[nb]);
		if (aux < 0)
			return (-1);
		len = len + aux;
	}
	len = ft_len_hex(nb);
	return (len);
}
