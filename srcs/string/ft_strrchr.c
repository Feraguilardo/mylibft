/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fer <fer@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:27:33 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/12 17:58:32 by fer              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	while (len >= 0)
	{
		if (str[len] == (unsigned char) c)
		{
			return ((char *)&str[len]);
		}
		len--;
	}
	return ((char *)0);
}
/*REVERSA*/
/*Cuando se encuentra C en STR devuelve desde la posicion del puntero*/
/*
// int	main(int argc, char **argv)
// {
// 	if (argc =! 3)
// 		return (0);
// 	printf("strchr: %s\n", ft_strrchr(argv[1], atoi(argv[2])));
// 	return (0);
// }
*/
