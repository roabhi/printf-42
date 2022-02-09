/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:12:55 by rabril-h          #+#    #+#             */
/*   Updated: 2022/02/09 22:57:51 by rabril-h         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libftprintf.h"

int		ft_checkarg(char ch, va_list args)
{
	int		print_arg;
	
	print_arg = 0;
	if (ch == 'c')
		print_arg += ft_putchar_cnt(va_arg(args, int));
	else if (ch == 's')
		print_arg += ft_putstr_cnt(va_arg(args, char *));
	else if (ch == 'p')
		printf("Need to print a pointer");
	else if (ch == 'd' || ch == 'i')
		printf("Need to print a number");
	else if (ch == 'u')
		printf("Need to print an unsigned number");
	else if (ch == 'x')
		printf("Need to print an hexadecimal number");
	else if (ch == 'X')
		printf("Need to print an uppercase hexadecmial number");
	else if (ch == '%')
		printf("Need to print just a %%");

	return (print_arg);
}

int		ft_printf(const char *s, ...)
{
	va_list		args;
	int			count;
	int			print;	

	if (!s)
		return (0);
	va_start (args, s);
	count = 0;
	print = 0;
	while (s[count])
	{
		if (s[count] == '%')
		{
			count++;
			print += ft_checkarg(s[count], args);
		}
		else
		{
			ft_putchar_fd(s[count], 1);
			print++;
		}
		count++;	
	}
	va_end(args);
	return (print);
}
