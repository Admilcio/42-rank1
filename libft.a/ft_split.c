/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:01:41 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/06 13:01:46 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	len;

	len = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			len++;
		while (*s != c && *s)
			s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**rstr;
	size_t	len;
	int		i;

	i = 0;
	rstr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!rstr || !s)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			rstr[i++] = ft_substr(s, 0, len);
			s = s + len;
		}
	}
	rstr[i] = NULL;
	return (rstr);
}

/*int	main()
{
	char	str[] = "Eu vou ser splitado!";
	char	c = ' ';
	char	**spt = ft_split(str, c);
	int	i = 0;
	while (spt[i] != 0)
	{
		ft_putstr_fd(spt[i], 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
}*/