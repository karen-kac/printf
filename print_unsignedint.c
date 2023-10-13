/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:39:15 by myokono           #+#    #+#             */
/*   Updated: 2023/10/13 13:47:27 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsignedint(unsigned int n)
{
    char	c;
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_print_unsignedint(n / 10);
	c = (n % 10) + '0';
	len += ft_print_char(c);
	return (len);
}
