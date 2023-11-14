/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:00:55 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:29:15 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	int		len;
	int		aux;
	char	*str;

	len = 0;
	aux = 0;
	str = ft_utoa(nb);
	if (!str)
		return (-1);
	aux = ft_putstr(str);
	free(str);
	if (aux < 0)
		return (-1);
	len = aux + len;
	return (len);
}
