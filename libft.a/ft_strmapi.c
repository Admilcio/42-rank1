/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:39:30 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/06 17:39:32 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = (*f)(i, s[i]);
		++i;
	}
	new[i] = 0;
	return (new);
}
/*
char custom_function(unsigned int index, char c)
{
    if (index % 2 != 0) {
        if (c >= 'a' && c <= 'z') {
            return c - 32; // Convert to uppercase
        }
    }
    return c; // Return the character as is
}

int main()
{
    char input_string[] = "hello, World!";
    char *result = ft_strmapi(input_string, &custom_function);

    if (result) {
        printf("Original String: %s\n", input_string);
        printf("Modified String: %s\n", result);

        // Don't forget to free the dynamically allocated memory.
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/