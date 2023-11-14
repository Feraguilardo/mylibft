/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:27:55 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:29:40 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	sign;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + ((unsigned char)str[i] - '0');
		i++;
	}
	return (nb * sign);
}
/* Transforma los numeros -> CHAR */
/*
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (0);
// 	printf("ft_atoi => %d || atoi %d\n", ft_atoi(argv[1]), atoi(argv[1]));
// 	return (0);
// }
*/
