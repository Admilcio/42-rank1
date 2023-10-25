/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:41:31 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/09 17:41:33 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL); 
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/* 
int main()
{
	t_list *my_list = NULL;

	// Add nodes to the list
	ft_lstadd_front(&my_list, ft_lstnew("Node 1"));
	ft_lstadd_front(&my_list, ft_lstnew("Node 2"));
	ft_lstadd_front(&my_list, ft_lstnew("Node 3"));

	// Get a pointer to the last node
	t_list *last_node = ft_lstlast(my_list);

	if (last_node)
	{
		printf("Last node content: %s\n", (char *)last_node->content);
	}
	else
	{
		printf("The list is empty.\n");
	}

	return 0;
} */
