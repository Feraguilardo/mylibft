/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:13:19 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:31 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lsttemp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lsttemp = ft_lstlast(*lst);
	lsttemp -> next = new;
}
/*Añade al final de una lista*/
/*Ordena la lista bien*/
/*
// int	main(int argc, char **argv)
// {
// 	int	i;
// 	t_list	*mylst = NULL;
// 	t_list	*printList = NULL;
// 	t_list	*control = NULL;

// 	if (argc <= 1)
// 		return (0);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		ft_lstadd_back(&mylst, ft_lstnew(ft_strdup(argv[i])));
// 		i++;
// 	}
// 	printList = mylst;
// 	control = mylst;
// 	while (printList !=  NULL)
// 	{
// 		printf("%s\n", (char *)printList -> content);
// 		printList = printList -> next;
// 	}
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
