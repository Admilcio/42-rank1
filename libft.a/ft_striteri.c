/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:25:50 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/06 18:25:54 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		++i;
	}
}
/*
void ft_test(unsigned int i, char *str) {
    *str += i;
}

int main() {
    char str[] = "Hello";
    
    // Print the original string
    printf("Original string: %s\n", str);

    // Apply the custom function to modify the string
    ft_striteri(str, ft_test);

    // Print the modified string
    printf("Modified string : %s\n", str);

    return 0;
}*/