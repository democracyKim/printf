# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minkim3 <minkim3@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 13:37:57 by minkim3           #+#    #+#              #
#    Updated: 2023/01/18 16:15:15 by minkim3          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
AR          = ar -rcs
RM          = rm -f
INCS        = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_new_string.c ft_itoa_extension.c
SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS        = $(SRCS:.c=.o)
OBJS_BONUS  = $(SRCS_BONUS:.c=.o)

ifdef WITH_BONUS
	OBJECTS = $(OBJS) $(OBJS_BONUS)
else
	OBJECTS = $(OBJS)
endif

all: $(NAME)
	
$(NAME): $(OBJECTS)
	$(AR) $@ $^

bonus:
	make WITH_BONUS=1 all

%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:      
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re bonus
