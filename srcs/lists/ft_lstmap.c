/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:16:31 by feaguila          #+#    #+#             */
/*   Updated: 2023/11/14 15:27:42 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*newnode;
	void	*ft_aux;

	if (!lst)
		return (NULL);
	nlst = NULL;
	while (lst != NULL)
	{
		ft_aux = f(lst -> content);
		newnode = ft_lstnew(ft_aux);
		if (!newnode)
		{
			ft_lstclear(&nlst, del);
			free (ft_aux);
			return (NULL);
		}
		ft_lstadd_back(&nlst, newnode);
		lst = lst -> next;
	}
	return (nlst);
}
/*Crea una nueva lista ordenada*/
/*Donde se la aplica una funcion al nuevo CONTENT*/
/*
// static void	*ft_strdup_wrapper_map(void *content)
// {
// 	char *str = (char *)content;
// 	return (ft_strdup(str));
// }

// static void	ft_strdel_map(void *content)
// {
// 	free(content);
// }

// int main(int argc, char **argv)
// {
// 	t_list	*mylst = NULL;
// 	t_list	*mappedList = NULL;
// 	t_list	*printList =  NULL;
// 	t_list	*mappedPrintList = NULL;
// 	int		i;

// 	if (argc <= 1)
// 		return (0);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		ft_lstadd_back(&mylst, ft_lstnew(ft_strdup(argv[i])));
// 		i++;
// 	}
// 	printList = mylst;
// 	while (printList != NULL)
// 	{
// 		printf("%s\n", (char *)printList->content);
// 		printList = printList->next;
// 	}
// 	mappedList = ft_lstmap(mylst, ft_strdup_wrapper_map, ft_strdel_map);
// 	if (mappedList == NULL)
// 	{
// 		printf("Error al aplicar ft_lstmap.\n");
// 		return (0);
// 	}
// 	mappedPrintList = mappedList;
// 	while (mappedPrintList != NULL)
// 	{
// 		printf("%s\n", (char *)mappedPrintList->content);
// 		mappedPrintList = mappedPrintList->next;
// 	}
// 	ft_lstclear(&mylst, ft_strdel);
// 	ft_lstclear(&mappedList, ft_strdel);
// 	return (0);
// }
*/
