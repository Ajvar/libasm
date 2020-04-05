# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/21 01:17:38 by jcueille          #+#    #+#              #
#    Updated: 2020/04/05 21:10:04 by jcueille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

RM = rm -f

CFLAGS = -Wextra -Wall -Werror

SRCS_PATH = ./srcs/

NAME = libasm.a

SRCS = 		$(SRCS_PATH)ft_strdup.s \
			$(SRCS_PATH)ft_strlen.s \
			$(SRCS_PATH)ft_strcpy.s \
			$(SRCS_PATH)ft_strcmp.s \
			$(SRCS_PATH)ft_write.s \
			$(SRCS_PATH)ft_read.s 

OBJS = $(SRCS:%.s=%.o)

%.o : %.s
	nasm -f macho64 -g $< -o $@
%.o : %.c
	$(CC) $(CFLAGS) -I. $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
clean: 
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY = all bonus clean fclean re
