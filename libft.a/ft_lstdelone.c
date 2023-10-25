/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:17:57 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/09 18:18:01 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main()
{
	t_list *my_list = NULL;

	// Create a node and add it to the list
	t_list *new_node = ft_lstnew("Node 1");
	ft_lstdelone(new_node, free); // Delete the node and its content

	return 0;
} */
