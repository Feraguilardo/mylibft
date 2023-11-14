/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:20:22 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:32 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*Apunta al nodo inicial*/
/*
// int main(int argc, char **argv)
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
// 		t_list *newnode = malloc(sizeof(t_list));
// 		if (!newnode)
// 			return (0);
// 		newnode -> content = argv[i];
// 		newnode -> next = NULL;
// 		ft_lstadd_front(&mylst, newnode);
// 		i++;
// 	}
// 	printList = mylst;
// 	control = mylst;
// 	while (printList != NULL)
// 	{
// 		printf("%s\n", (char *)printList -> content);
// 		printList = printList -> next;
// 	}
// 	while (control != NULL)
// 	{
// 		free(control -> content);
// 		free(control);
// 		mylst = control;
// 	}
// 	return (0);
// }
*/
