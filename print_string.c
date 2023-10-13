/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:39:11 by myokono           #+#    #+#             */
/*   Updated: 2023/10/13 13:28:19 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	len;

	len = 0;
    if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[len])
		len++;
	return (write(1, str, len));
}
