/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:29:58 by feaguila          #+#    #+#             */
/*   Updated: 2023/10/26 07:40:21 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_maxnum_itoa(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

static int	ft_len_itoa(int nb)
{
	int	len;

	len = 0;
	if (nb == 0 || nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		len;

	len = ft_len_itoa(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
		str[0] = '-';
	while (nb != 0)
	{
		len--;
		str[len] = ft_maxnum_itoa(nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
/* Transforma un INT a CHAR */
/*
// int	main(int argc, char **argv)
// {
// 	char	*mem;
// 	int		i;

// 	if (argc != 2)
// 		return (0);
// 	mem = ft_itoa(atoi(argv[1]));
// 	printf("ITOA => %s\n", mem);
// 	printf("strlen de itoa => %zu\n", strlen(mem));
// 	while (mem[i] != '\0')
// 	{
// 		write (1, &mem[i], 1);
// 		write (1, "\n", 1);
// 		i++;
// 	}
// 	free(mem);
// 	return (0);
// }
*/
