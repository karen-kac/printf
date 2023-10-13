/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:39:15 by myokono           #+#    #+#             */
/*   Updated: 2023/10/13 11:13:07 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_unsigned(unsigned int n)
{
	char	c;
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_putnbr_unsigned(n / 10);
	c = (n % 10) + '0';
	len += ft_print_char(c);
	return (len);
}

int	ft_print_unsignedint(unsigned int n)
{
	return (ft_putnbr_unsigned(n));
}
