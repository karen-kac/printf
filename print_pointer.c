/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:39:06 by myokono           #+#    #+#             */
/*   Updated: 2023/10/15 16:40:31 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	ft_putnbr_hex(unsigned long nbr)
{
	char	*hex;
	ssize_t	len;
	ssize_t	i;

	i = 0;
	hex = "0123456789abcdef";
	len = 0;
	if (nbr >= 16)
		i = ft_putnbr_hex(nbr / 16);
	if (i == -1)
		return (-1);
	len += i;
	i = ft_print_char(hex[nbr % 16]);
	if (i == -1)
		return (-1);
	len += i;
	return (len);
}

ssize_t	ft_print_pointer(void *ptr)
{
	ssize_t	len;
	ssize_t	i;

	len = 0;
	i = 0;
	i = write(1, "0x", 2);
	if (i == -1)
		return (-1);
	len += i;
	i = ft_putnbr_hex((unsigned long)ptr);
	if (i == -1)
		return (-1);
	len += i;
	return (len);
}
