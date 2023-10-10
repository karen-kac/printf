/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:28:33 by myokono           #+#    #+#             */
/*   Updated: 2023/10/10 16:44:54 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h> // va_list, va_start, va_arg, va_end
#include<unistd.h>
#include "libft.h"

// プロトタイプ宣言
int ft_printf(const char *, ...);

int ft_print_char(va_list args);

int ft_print_hex(va_list args);

int ft_print_int(va_list args);

int ft_print_percent(va_list args);


// 追加のヘッダーファイルや定義をここに追加できます

#endif
