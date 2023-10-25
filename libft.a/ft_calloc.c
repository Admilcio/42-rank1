/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:12:35 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/05 19:16:22 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(tot_size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
/* 
int main() {
	size_t num_elements = 5;
	size_t element_size = sizeof(int);

	// Using your ft_calloc function to allocate memory
	int *array = (int *)ft_calloc(num_elements, element_size);

	if (array != NULL) {
		// Use the allocated memory
		for (size_t i = 0; i < num_elements; i++) {
			array[i] = i * 10;
		}

		// Print the values
		for (size_t i = 0; i < num_elements; i++) {
			printf("array[%zu] = %d\n", i, array[i]);
		}

		// Free the allocated memory when done
		free(array);
	} else {
		printf("Memory allocation failed.\n");
	}

	return 0;
} */