/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:44:22 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/25 14:44:30 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h> 

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			flag;
	int			read_result;

	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= FOPEN_MAX)
		return (buffer_total_clear(fd, (char **) buffer, line));
	while (1)
	{
		if (buffer[0] == '\0')
		{
			read_result = read(fd, buffer, BUFFER_SIZE);
			//printf("buffer is: %s\n", buffer);
			if (read_result == -1)
				return (buffer_total_clear(fd, NULL, line));
			if (read_result == 0)
			{
				//printf("read_result is: %s\n", line);
				return (line);
			}
				
		}
		
		flag = line_updater(&line, buffer);
		printf("buffer before clean: %s\n", buffer);
		buffer_clear(buffer);
		printf("buffer after clean: %s\n", buffer);
		if (flag == 1)
			return (line);
		if (flag == -1)
			return (NULL);
	}
}

int	main(void)
{
	char	*line;
	int		fd1;

	fd1 = open("texto", O_RDONLY);
	//printf("line: %d", fd1);
	if (fd1 == -1)
	{
		perror("Error opening file");
		return (1);
	}
    while ((line = get_next_line(fd1)) != NULL) {
      printf("line: %s\n", line);
	  printf("o numero: %d\n", fd1);
    	free(line);
    }    
	close(fd1);

	//printf("FOPEN_MAX = %d\n",FOPEN_MAX);
    return (0);
}
