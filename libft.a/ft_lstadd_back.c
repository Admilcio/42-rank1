/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:49:07 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/09 17:49:10 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
/*
int main()
{
    t_list *my_list = NULL;

    // Add nodes to the list
    ft_lstadd_back(&my_list, ft_lstnew("Node 1"));
    ft_lstadd_back(&my_list, ft_lstnew("Node 2"));
    ft_lstadd_back(&my_list, ft_lstnew("Node 3"));

    // Print the elements in the list
    t_list *current = my_list;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
} */