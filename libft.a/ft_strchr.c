/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:43:14 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/04 16:43:17 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && (char)c != s[i])
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*
int main() {
	const char *str = "Hello, World!";
	int character_to_find = 'o';

	char *result = ft_strchr(str, character_to_find);

	if (result) {
		printf("Found '%c' at position %ld\n", character_to_find, result - str);
	} else {
		printf("Character '%c' not found in the string.\n", character_to_find);
	}
	return 0;
}*/