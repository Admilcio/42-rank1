/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:15:18 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/03 12:23:34 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') 
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/* 
int main()
{
	char c = 'A';

	if (ft_isalnum(c))
		printf("Is alphanumeric");
	else
		printf("It's not alphanumeric.");
	return (0);
}*/