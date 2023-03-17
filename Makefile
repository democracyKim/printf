# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minkim3 <minkim3@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 16:55:01 by minkim3           #+#    #+#              #
#    Updated: 2023/01/26 14:29:40 by minkim3          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_printf.c ft_digit_to_string.c ft_check_error.c ft_check_options.c \
			ft_apply_type.c ft_apply_options.c ft_apply_flag.c \
			ft_helper.c ft_malloc_error.c ft_minus_and_print.c
# B_SOURCES = ft_printf_bonus.c ft_digit_to_string_bonus.c ft_check_error_bonus.c \
# 			ft_check_options_bonus.c ft_apply_type_bonus.c ft_apply_options_bonus.c \
# 			ft_apply_flag_bonus.c ft_helper_bonus.c ft_malloc_error_bonus.c \
# 			ft_minus_and_print_bonus.c

OBJECT = $(SOURCES:.c=.o)
B_OBJECT = $(B_SOURCES:.c=.o)

ifdef WITH_BONUS
	OBJECTS = $(OBJECT) $(B_OBJECT)
else
	OBJECTS = $(OBJECT)
endif

all : $(NAME)

$(NAME) : $(OBJECTS)
	make -C libft all
	cp ./libft/libft.a ./$(NAME)
	ar rcs $@ $^

.c.o :
	cc $(CFLAGS) -c $< -o $(<:.c=.o)
bonus :
	make WITH_BONUS=1 all
clean :
	rm -rf $(OBJECT) $(B_OBJECT)
	make -C libft clean

fclean : clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re