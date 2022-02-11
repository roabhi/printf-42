/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:48:34 by rabril-h          #+#    #+#             */
/*   Updated: 2022/02/11 21:22:28 by rabril-h         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include "libftprintf.h"
#include <limits.h>

int		main()
{
	char			str_1 = 'H';
	char			str_2[] = "Hello";
	char 		    str_3[] = "World";
	int				num_1 = -21443247;
	unsigned int	num_2 = 345;

	int a;
	int b;
	
	printf("========= ft_printf char ==========\n\n");
	a = ft_printf("mi caracter es %c\n" ,str_1);
	printf("mi FT retorna: %d\n", a);
	b = printf("mi caracter es %c\n", str_1);
	printf("printf retorna: %d\n", b);

	printf("\n\n");

	printf("========= ft_printf (char *) ==========\n\n");

	a = ft_printf("mi cadena es %s\n" ,str_2);
	printf("mi FT retorna: %d\n", a);
	b = printf("mi cadena es %s\n", str_2);
	printf("printf retorna: %d\n", b);

	printf("========= ft_printf puntero  ==========\n\n");

	a = ft_printf("mi cadena es %p\n", str_3);
	printf("mi FT retorna: %d\n", a);
	b = printf("mi cadena es %p\n", str_3);
	printf("printf retorna: %d\n", b);

	printf("========= ft_printf numero base 10 (caso i o d) ==========\n\n");

	
	a = ft_printf("mi cadena es %d\n", num_1);
	printf("mi FT retorna: %d\n", a);
	b = printf("mi cadena es %d\n", num_1);
	printf("printf retorna: %d\n", b);

	printf("========= ft_printf numero base 10 unsigned  ==========\n\n");

	a = ft_printf("mi cadena es %u\n", num_2);
	printf("mi FT retorna: %d\n", a);
	b = printf("mi cadena es %u\n", num_2);
	printf("printf retorna: %d\n", b);
	

	return (0);
}
