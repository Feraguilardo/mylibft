/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 08:34:21 by feaguila          #+#    #+#             */
/*   Updated: 2023/10/03 15:41:01 by feaguila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
/*Va al ultimo nodo de la lista*/
/*
// int	main(int argc, char **argv)
// {
// 	int	i;
// 	t_list *mylst = NULL;

// 	if (argc <= 1)
// 		return (0);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		ft_lstadd_front(&mylst, ft_lstnew(argv[i]));
// 		i++;
// 	}
// 	printf("LAST => %s\n", ft_lstlast(mylst) -> content );
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
