/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:16:42 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/09 17:16:45 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
int main()
{
	t_list *my_list = NULL; // Initialize an empty list

	// Create nodes and add them to the front of the list
	ft_lstadd_front(&my_list, ft_lstnew("novo3"));
	ft_lstadd_front(&my_list, ft_lstnew("novo2"));
	ft_lstadd_front(&my_list, ft_lstnew("novo1"));

		printf("%d\n", ft_lstsize(my_list));
	return (0);
}
 */