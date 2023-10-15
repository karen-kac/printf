/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:38:55 by myokono           #+#    #+#             */
/*   Updated: 2023/10/15 14:37:28 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_int_len(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (n == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

ssize_t	ft_print_int(int n)
{
	long	nb;
	char	c;
	ssize_t	len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		len++;
	}
	if (nb > 9)
		len += ft_print_int(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
	len++;
	if (len != ft_int_len(n))
		return (-1);
	return (len);
}
