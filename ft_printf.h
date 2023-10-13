/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:28:33 by myokono           #+#    #+#             */
/*   Updated: 2023/10/13 11:12:19 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int			ft_branch(const char c, va_list args);

int			ft_printf(const char *str, ...);

int			ft_print_char(int c);

//static int	ft_putnbr_hexx(unsigned int nbr, char *hex_digits);


int			ft_print_hex(unsigned int nbr, int use_uppercase);

int			ft_print_int(int n);

int			ft_print_percent(void);

//static int	ft_putnbr_hex(unsigned long nbr);

int			ft_print_pointer(void *ptr);

int			ft_print_string(char *str);

//static int	ft_putnbr_unsigned(unsigned int n);

int			ft_print_unsignedint(unsigned int n);

#endif