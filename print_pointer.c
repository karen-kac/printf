/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:39:06 by myokono           #+#    #+#             */
/*   Updated: 2023/10/13 13:43:18 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long nbr)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	len = 0;
	if (nbr >= 16)
		len += ft_putnbr_hex(nbr / 16);
	len += ft_print_char(hex[nbr % 16]);
	return (len);
}

int	ft_print_pointer(void *ptr)
{
	int	len;

	len = 0;
    if (ptr == NULL)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += ft_putnbr_hex((unsigned long)ptr);
	return (len);
}
