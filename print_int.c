/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:38:55 by myokono           #+#    #+#             */
/*   Updated: 2023/10/13 11:12:49 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	long	nb;
	char	c;
	int		print_len;

	nb = n;
	print_len = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		print_len++;
	}
	if (nb > 9)
		print_len += ft_print_int(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
	print_len++;
	return (print_len);
}
