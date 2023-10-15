/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:28:33 by myokono           #+#    #+#             */
/*   Updated: 2023/10/15 19:15:35 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

ssize_t	ft_branch(const char c, va_list args);

int		ft_printf(const char *str, ...);

ssize_t	ft_print_char(int c);

ssize_t	ft_print_hex(unsigned int nbr, int use_uppercase);

ssize_t	ft_print_int(int n);

ssize_t	ft_print_percent(void);

ssize_t	ft_print_pointer(void *ptr);

ssize_t	ft_print_string(char *str);

ssize_t	ft_print_unsignedint(unsigned int n);

#endif