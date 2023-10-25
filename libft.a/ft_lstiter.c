/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:57:04 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/09 19:57:10 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void print_content(void *content)
{
	if (content)
		printf("%s\n", (char *)content);
}

int main()
{
	// Create a linked list and add some nodes
	t_list *my_list = NULL;
	ft_lstadd_back(&my_list, ft_lstnew("Node 1"));
	ft_lstadd_back(&my_list, ft_lstnew("Node 2"));
	ft_lstadd_back(&my_list, ft_lstnew("Node 3"));

	// Use ft_lstiter to print the content of each node
	printf("Printing the content of the list:\n");
	ft_lstiter(my_list, print_content);

	return 0;
} */