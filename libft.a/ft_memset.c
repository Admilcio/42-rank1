/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:52:19 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/03 13:13:34 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/* 
int main(void)
{
    char str[20]; // Create a character array to store the result
    size_t len = 10; // Number of bytes to set
    char value = 'A'; // Value to set in each byte

    // Use ft_memset to fill the character array with 'A' for the first 10 bytes
    ft_memset(str, value, len);

    // Print the result
    printf("Result after using ft_memset: %s\n", str);

    // Compare with memset from the standard library
    char std_str[20];
    memset(std_str, value, len);

    // Check if the result matches the one obtained with ft_memset
    if (memcmp(str, std_str, len) == 0)
    {
        printf("Both ft_memset and memset produced the same result.\n");
    }
    else
    {
        printf("There is a difference between ft_memset and memset results.\n");
    }

    return (0);
} */