/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:13:38 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:39 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*Aplica una funcion sobre el contenido de una lista*/
/*
// static void	ft_printelement(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	t_list	*mylst = NULL;
// 	t_list	*control = NULL;

// 	if (argc <= 1)
// 		return (0);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		ft_lstadd_back(&mylst, ft_lstnew(ft_strdup(argv[i])));
// 		i++;
// 	}
// 	ft_lstiter(mylst, ft_printelement);
// 	control = mylst;
// 	while (control != NULL)
// 	{
// 		mylst = mylst -> next;
// 		free(control -> content);
// 		free(control);
// 		mylst = control;
// 	}
// 	return (0);
// }
*/
