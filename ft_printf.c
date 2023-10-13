/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:33:29 by myokono           #+#    #+#             */
/*   Updated: 2023/10/13 11:08:22 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_branch(const char c, va_list args)
{
	int	print_len;

	print_len = 0;
	if (c == 'c')
		print_len = ft_print_char(va_arg(args, int));
	else if (c == 's')
		print_len = ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		print_len = ft_print_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		print_len = ft_print_int(va_arg(args, int));
	else if (c == 'u')
		print_len = ft_print_unsignedint(va_arg(args, unsigned int));
	else if (c == 'x')
		print_len = ft_print_hex(va_arg(args, unsigned int), 0);
	else if (c == 'X')
		print_len = ft_print_hex(va_arg(args, unsigned int), 1);
	else if (c == '%')
		print_len = ft_print_percent();
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		print_len;
	size_t	i;
	va_list	args;

	va_start(args, str);
	print_len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_branch(str[i + 1], args);
		}
		else
			print_len += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
