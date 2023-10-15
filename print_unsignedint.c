/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:39:15 by myokono           #+#    #+#             */
/*   Updated: 2023/10/15 14:42:26 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_unsignedint(unsigned int n)
{
    char	c;
	ssize_t		len;
	ssize_t i;

	len = 0;
	i = 0;
	if (n >= 10)
		i = ft_print_unsignedint(n / 10);
	if(i == -1)
		return (-1);
	len += i;
	c = (n % 10) + '0';
	i = ft_print_char(c);
	if(i == -1)
		return (-1);
	len += i;
	return (len);
}
