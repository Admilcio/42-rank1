/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:04:22 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/09 20:04:24 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*
// Function to convert a string to uppercase
void *string_to_uppercase(void *data)
{
	char *str = (char *)data;
	char *new_str = ft_strdup(str);
	if (new_str)
	{
		int i = 0;
		while (new_str[i])
		{
			new_str[i] = ft_toupper(new_str[i]);
			i++;
		}
	}
	return new_str;
}

int main(void)
{
	// Create a linked list with three strings
	t_list *lst = ft_lstnew("hello");
	ft_lstadd_back(&lst, ft_lstnew("world"));
	ft_lstadd_back(&lst, ft_lstnew("libft"));

	// Apply the ft_lstmap function to convert strings to uppercase
	t_list *uppercase_list = ft_lstmap(lst, string_to_uppercase, free);
	t_list *temp;
	// Print the mapped list (uppercase strings)
	printf("Uppercase list:\n");
	temp = uppercase_list;
	while (temp)
	{
		printf("%s -> ", (char *)(temp->content));
		temp = temp->next;
	}
	printf("NULL\n");

	return (0);
} */