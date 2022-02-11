/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:12:55 by rabril-h          #+#    #+#             */
/*   Updated: 2022/02/11 19:43:38 by rabril-h         ###   ########.bcn      */
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
		print_arg += ft_putptr_cnt(va_arg(args, unsigned long long));
	else if (ch == 'd' || ch == 'i')
		print_arg += ft_putnbr_cnt(va_arg(args, int));
	else if (ch == 'u')
		printf("Need to print an unsigned number");
	else if (ch == 'x')
		printf("Need to print an hexadecimal number");
	else if (ch == 'X')
		printf("Need to print an uppercase hexadecmial number");
	else if (ch == '%')
		print_arg += ft_putchar_cnt(ch);
	//printf("print arga VALE %d\n", print_arg); 	
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
			//printf("print VALE EN EL RETRNO %d\n", print);
		}
		else
		{
			//printf("printo chars\n"); 
			ft_putchar_fd(s[count], 1);
			print++;
			//printf("print VALE %d\n", print);
		}
		count++;	
	}
	//printf("print VALE %d\n", print); 
	va_end(args);
	return (print);
}
