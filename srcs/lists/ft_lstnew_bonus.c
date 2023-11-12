/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:35:31 by feaguila          #+#    #+#             */
/*   Updated: 2023/10/03 15:20:12 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	lstnew -> content = content;
	lstnew -> next = NULL;
	return (lstnew);
}
/* Añade contenido a un nuedo y apunta a NULL */
/*
// int	main(int argc, char **argv)
// {
// 	t_list	*mylst = NULL;
// 	t_list	*printList = NULL;
// 	t_list	*control = NULL;

// 	if (argc != 2)
// 		return (0);
// 	mylst = ft_lstnew(ft_strdup(argv[1]));
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
