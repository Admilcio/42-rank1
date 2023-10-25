/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:46:49 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/05 14:46:52 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	h = 0;
	while (haystack[h] != '\0' && h < len)
	{
		if (haystack[h] == needle[0])
		{
			n = 0;
			while (needle[n] && haystack[h + n] && h + n < len
				&& haystack[h + n] == needle[n])
				n++;
			if (needle[n] == '\0')
				return ((char *)haystack + h);
		}
		h++;
	}
	return (0);
}
/*
int main() {
	const char *haystack = "Hello world!";
	const char *needle = "world";

	size_t len = 11;

	char *result = ft_strnstr(haystack, needle, len);

	if (result != NULL) {
		printf("Needle found: %s\n", result);
	} else {
		printf("Needle not found within the first %zu characters.\n", len);
	}

	return 0;
}*/
