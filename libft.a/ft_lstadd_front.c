/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:08:15 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/09 16:08:17 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/* 
int main() 
{
    t_list *my_list = NULL; // Initialize an empty list

    // Create nodes and add them to the front of the list
    ft_lstadd_front(&my_list, ft_lstnew("novo3"));
    ft_lstadd_front(&my_list, ft_lstnew("novo2"));
    ft_lstadd_front(&my_list, ft_lstnew("novo1"));

    t_list *current = my_list;

    printf("Antes de adicionar novo nó:\n");
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    
    ft_lstadd_front(&my_list, ft_lstnew("Node 4"));

    printf("Após adicionar novo nó:\n");
    current = my_list;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Free the allocated memory for 
	the nodes (Don't forget to do this in practice)
    while (my_list)
    {
        t_list *temp = my_list;
        my_list = my_list->next;
        free(temp->content); // Assuming content 
		is dynamically allocated
        free(temp);
    }

    return 0;
}
*/
