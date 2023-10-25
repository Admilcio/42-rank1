/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:57:04 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/05 16:57:07 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !new_str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
/* 
int main() {
    const char *string1 = "Hello, ";
    const char *string2 = "World!";
    char *result;

    // Use ft_strjoin to concatenate two strings
    result = ft_strjoin(string1, string2);

    if (result != NULL) {
        printf("String 1: %s\n", string1);
        printf("String 2: %s\n", string2);
        printf("Concatenated: %s\n", result);

        // Don't forget to free the memory allocated for the concatenated string
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/