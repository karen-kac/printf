/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:39:11 by myokono           #+#    #+#             */
/*   Updated: 2023/10/15 14:27:00 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_string(char *str)
{
	ssize_t	len;
	
	len = 0;
    if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[len])
		len++;
	return (write(1, str, len));
}
