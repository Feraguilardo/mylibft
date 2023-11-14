/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:53:03 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:33 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lsttemp;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		lsttemp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = lsttemp;
	}
}
/*Elimina todos los nodos de una lista a partir de uno en concreto*/
/* del = 2 ==> del 2,3,... */
/*
// static void ft_strdel(void *content)
// {
// 	free(content);
// }

// int main(int argc, char **argv)
// {
// 	t_list	*mylst = NULL;
// 	t_list	*printList = NULL;
// 	t_list	*clearedList = NULL;
// 	int	i;

// 	if (argc <= 1)
// 		return (0);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		ft_lstadd_back(&mylst, ft_lstnew(ft_strdup(argv[i])));
// 		i++;
// 	}
// 	*printList = mylst;
// 	while (printList != NULL)
// 	{
// 		printf("%s\n", (char *)printList->content);
// 		printList = printList->next;
// 	}
// 	ft_lstclear(&mylst, ft_strdel);
// 	printf("\nLista después de liberar:\n");
// 	clearedList = mylst;
// 	while (clearedList != NULL)
// 	{
// 		printf("%s\n", (char *)clearedList->content);
// 		clearedList = clearedList->next;
// 	}
// 	return (0);
// }
*/
