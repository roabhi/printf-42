/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:21:29 by rabril-h          #+#    #+#             */
/*   Updated: 2022/02/09 22:54:59 by rabril-h         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"
# include <stdio.h>

int		ft_printf(const char *s, ...);
int		ft_putchar_cnt(const char s);
int		ft_putstr_cnt(const char *s);

#endif
