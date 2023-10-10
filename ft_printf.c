/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:33:29 by myokono           #+#    #+#             */
/*   Updated: 2023/10/10 17:10:47 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_branch(const char c,)
{
	int print_len;
	print_len = 0;
	if(c == 'c')
		print_len = ft_print_char()
	else if(c == 's')
		print_len = ft_print_string();
	else if(c == 'p')
		print_len = ft_print_pointer();
	else if(c == 'd' || c == 'i')
		print_len = ft_print_int();
	else if(c == 'u')
		print_len = ft_print_unsignedint();
	else if(c == 'x' || c == 'X')
		print_len = ft_print_hex();
	else if(c == '%')
		print_len = ft_print_percent();
	return (print_len);
}

int ft_printf(const char * str, ...)
{
	int print_len;
	size_t i;

	print_len = 0;
	i = 0;
	
	while(str[i])
	{
		if(str[i] == '%')
		{
			print_len += ft_branch(str[i + 1], );
		}
		else
			print_len += ft_putchar(str[i]);
		i++;
	}
	
	return (print_len);
}
