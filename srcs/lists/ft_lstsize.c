/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 07:30:41 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:46 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
/*Devuelve el SIZE de la una lista ~= LEN*/
/*
// int	main(int argc, char ** argv)
// {
// 	int	i;
// 	t_list *mylst = NULL;

// 	i = 1;
// 	if (argc <= 1)
// 		return (0);
// 	while (i < argc)
// 	{
// 		t_list *newnode = malloc(sizeof(t_list));
// 		if (!newnode)
// 			return (0);
// 		newnode -> content = argv[i];
// 		newnode -> next = NULL;
// 		ft_lstadd_front(&mylst, newnode);
// 		i++;
// 	}
// 	printf("SIZE => %d\n", ft_lstsize(mylst));
// 	while (mylst != NULL)
// 	{
// 		printf("%s\n", (char *)mylst -> content);
// 		free(mylst);
// 		mylst = mylst -> next;
// 	}
// 	return (0);
// }
*/
