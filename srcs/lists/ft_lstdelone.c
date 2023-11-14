/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:20:50 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:37 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst -> content)
		del(lst -> content);
	free(lst);
	lst = NULL;
}
/*Elimina un NODO de la una lista*/
/*
// static void	del_content(void *content)
// {
// 	free(content);
// }

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	k;
// 	t_list *mylst = NULL;
// 	t_list *toDelete = NULL;
// 	t_list *prev = NULL;
// 	t_list *printList = NULL;
// 	t_list *control = NULL;

// 	if (argc <= 2)
// 		return (0);
// 	i = 2;
// 	k = atoi(argv[1]); //esto es num de parametro a eliminar
// 	while (i < argc)
// 	{
// 		printf("argv[%i] >> %s\n", i, argv[i]);
// 		ft_lstadd_back(&mylst, ft_lstnew(ft_strdup(argv[i])));
// 		i++;
// 	}
// 	//-->PRIMER NODO de la lista porque mylst esta apuntando al primer nodo<--
// 	toDelete = mylst;
// 	prev = mylst;
// 	printList = mylst;
// 	if (k > i)
// 	{
// 		printf("No se puede borrar\n");
// 		exit (1);
// 	}
// 	printf("Se puede borrar\n" );
// 	i = 0;
// 	while ((i < k - 1) && (prev->next != NULL))
// 	{
// 		prev = prev->next;
// 		i++;
// 	}
// 	i = 0;
// 	while (i < k && toDelete->next != NULL)
// 	{
// 		toDelete = toDelete->next;
// 		i++;
// 	}
// 	if (toDelete->next)
// 		prev->next = toDelete->next;
// 	else
// 		prev->next = NULL;
// 	ft_lstdelone(toDelete, del_content);
// 	while (printList != NULL)
// 	{
// 		printf("%s\n", printList->content);
// 		printList = printList->next;
// 	}
// 	control = mylst;
// 	while (control != NULL)
// 	{
// 		control = control->next;
// 		ft_lstdelone(mylst, del_content);
// 		mylst = control;
// 	}
// 	return (0);
// }
*/
