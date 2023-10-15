/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:38:51 by myokono           #+#    #+#             */
/*   Updated: 2023/10/15 14:39:36 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	ft_putnbr_hexx(unsigned int nbr, char *hex_digits)
{
	ssize_t	len;
	ssize_t	i;

	i = 0;
	len = 0;
	if (nbr >= 16)
		i= ft_putnbr_hexx(nbr / 16, hex_digits);
	if(i == -1)
		return (-1);
	len += i;
	i = ft_print_char(hex_digits[nbr % 16]);
	if(i == -1)
		return (-1);
	len += i;
	return (len);
}

ssize_t	ft_print_hex(unsigned int nbr, int use_uppercase)
{
	char	*hex_lower;
	char	*hex_upper;

	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (use_uppercase)
		return (ft_putnbr_hexx(nbr, hex_upper));
	else
		return (ft_putnbr_hexx(nbr, hex_lower));
}
