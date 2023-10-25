/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:14:52 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/03 13:26:00 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/* 
int main() {
    char buffer[20]; 
    strcpy(buffer, "Hello, World!");

    printf("Before bzero: %s\n", buffer);

    ft_bzero(buffer, sizeof(buffer));

    printf("After bzero: %s\n", buffer);

    return 0;
} */