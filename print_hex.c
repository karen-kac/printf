/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:38:51 by myokono           #+#    #+#             */
/*   Updated: 2023/10/13 11:13:29 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hexx(unsigned int nbr, char *hex_digits)
{
	int	len;

	len = 0;
	if (nbr >= 16)
		len += ft_putnbr_hexx(nbr / 16, hex_digits);
	len += ft_print_char(hex_digits[nbr % 16]);
	return (len);
}

int	ft_print_hex(unsigned int nbr, int use_uppercase)
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
