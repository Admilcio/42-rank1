/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:57:37 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/06 11:57:40 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}
/* 
int main()
{
    char str[] = "adadadggssfgdgad";
    char str1[] = "ade";
    char *trim = ft_strtrim(str, str1);

    if (trim)
    {
        printf("%s", trim);
        free(trim); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed or s1 is NULL.\n");
    }

    return 0;
} */