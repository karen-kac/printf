/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:33:29 by myokono           #+#    #+#             */
/*   Updated: 2023/10/15 13:45:22 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_branch(const char c, va_list args)
{
	ssize_t	print_len;

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
	ssize_t	print_len;
	size_t	i;
	ssize_t		current;
	va_list	args;

	va_start(args, str);
	print_len = 0;
	current = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			current = ft_branch(str[++i], args);
		else
			current = ft_print_char(str[i]);
		if (current == -1)
			return (-1);
		print_len += current;
		i++;
	}
	va_end(args);
	if (print_len > INT_MAX)
		return (-1);
	return ((int)print_len);
}

// #include "ft_printf.h"
// #include <stdio.h>

// int main(void)
// {
//     int ft_len, std_len;

//     
//     ft_len = ft_printf("Test1: Hello, World!\n");
//     std_len = printf("Test1: Hello, World!\n");
//     printf("Expected: %d, Got: %d\n", std_len, ft_len);

//     //
//     ft_len = ft_printf("Test2: Number: %d\n", 42);
//     std_len = printf("Test2: Number: %d\n", 42);
//     printf("Expected: %d, Got: %d\n", std_len, ft_len);

//     //
//     ft_len = ft_printf("Test3: Hex (lowercase): %x\n", 255);
//     std_len = printf("Test3: Hex (lowercase): %x\n", 255);
//     printf("Expected: %d, Got: %d\n", std_len, ft_len);

//     //
//     ft_len = ft_printf("Test4: Hex (uppercase): %X\n", 255);
//     std_len = printf("Test4: Hex (uppercase): %X\n", 255);
//     printf("Expected: %d, Got: %d\n", std_len, ft_len);

//     //
//     int num = 42;
//     ft_len = ft_printf("Test5: Pointer: %p\n", &num);
//     std_len = printf("Test5: Pointer: %p\n", &num);
//     printf("Expected: %d, Got: %d\n", std_len, ft_len);

//
//     ft_len = ft_printf("Test6: Pointer: %p\n", (void *)0);
//     std_len = printf("Test6: Pointer: %p\n", (void *)0);
//     printf("Expected: %d, Got: %d\n", std_len, ft_len);

//     return (0);
// }
