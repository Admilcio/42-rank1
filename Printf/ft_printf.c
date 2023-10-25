/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:05:39 by ada-mata          #+#    #+#             */
/*   Updated: 2023/10/24 17:06:29 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_format_checker(char s, va_list *args, int *len, int i)
{
	if (s == 's')
		ft_putstr(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_lenght(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_lenght('%', len);
	else 
		i--;
}

int	ft_printf(const char *string, ...)
{
	int			i;
	int			len;
	va_list		args;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_format_checker(string[i], &args, &len, i);
			i++;
		}
		else
		{
			ft_putchar_lenght(string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}

int main ()
{
	//int	i = 0;
	char	*c = "OLA";
/*	char *line;
	int i;
	int i2;

	line = "20";
	i = ft_printf ("%%, %c, agora e uma string %s, %d,            
	 %i, %u, %x, %X, %p, %p\n", 'c', line, 42, -42, 2147483647, 
	 15, 15, &line, line);
	i2 = printf ("%%, %c, agora e uma string %s, %d,            
	 %i, %u, %x, %X, %p, %p\n", 'c', line, 42, -42, 2147483647, 
	 15, 15, &line, line);
	printf("\n");

	ft_printf ("i = %i\n", i);
	printf ("i = %i\n", i2);
	
	return (0);*/
	printf("asd%c\n", c[4]);
	printf("asd%c\n", c[5]);
	printf("asd%c\n", c[6]);
	printf("asd%c\n", c[7]);
	printf("asd%c\n", c[8]);
	printf("asd%c\n", c[9]);
	printf("asd%c\n", c[10]);
	printf("asd%c\n", c[11]);
	printf("asd%c\n", c[12]);
	printf("asd%c\n", c[13]);
	printf("asd%c\n", c[14]);
	printf("asd%c\n", c[15]);
	printf("asd%c\n", c[16]);
	printf("asd%c\n", c[17]);
	printf("asd%c\n", c[18]);
	printf("asd%c\n", c[19]);
	printf("asd%c\n", c[20]);

	printf("\n\n");

	ft_printf("asd%c\n", c[4]);
	ft_printf("asd%c\n", c[5]);
	ft_printf("asd%c\n", c[6]);
	ft_printf("asd%c\n", c[7]);
	ft_printf("asd%c\n", c[8]);
	ft_printf("asd%c\n", c[9]);
	ft_printf("asd%c\n", c[10]);
	ft_printf("asd%c\n", c[11]);
	ft_printf("asd%c\n", c[12]);
	ft_printf("asd%c\n", c[13]);
	ft_printf("asd%c\n", c[14]);
	ft_printf("asd%c\n", c[15]);
	ft_printf("asd%c\n", c[16]);
	ft_printf("asd%c\n", c[17]);
	ft_printf("asd%c\n", c[18]);
	ft_printf("asd%c\n", c[19]);
	ft_printf("asd%c\n", c[20]);
	//ft_printf("print: %c", c[10]);

}
