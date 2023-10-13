# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 15:31:13 by myokono           #+#    #+#              #
#    Updated: 2023/10/13 11:07:59 by myokono          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = \
		ft_printf.c print_char.c print_hex.c print_int.c print_percent.c \
 		print_pointer.c print_string.c print_unsignedint.c
		

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

# so: $(OBJS)
# 		@$(CC) -nostartfiles -fPIC $(CFLAGS) $(OBJS)
# 		@$(CC) -nostartfiles -shared -o libft.so $(OBJS)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

$(OBJS): %.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
