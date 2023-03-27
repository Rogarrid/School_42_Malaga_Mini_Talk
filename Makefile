# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rocio <rocio@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 17:54:03 by rocio             #+#    #+#              #
#    Updated: 2023/03/27 18:26:22 by rocio            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT = client
SERVER = server

CC		= gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		= rm -f

CLIENT_FILES = ./source/client.c ./libs/libft/ft_atoi.c ./libs/printf/ft_printf.c \
		./libs/printf/ft_conver_base_hexa.c ./libs/printf/ft_filter_conver.c \
		./libs/printf/ft_lowercase_hex.c ./libs/printf/ft_putchar_length.c \
		./libs/printf/ft_putcharporcent_length.c \
		./libs/printf/ft_puthex_length.c ./libs/printf/ft_putnbr_length.c \
		./libs/printf/ft_putnbr_unsig_length.c \
		./libs/printf/ft_strchr_length.c ./libs/printf/ft_uppercase_hex.c \
		./libs/libft/ft_strlen.c \

SERVER_FILES = ./source/server.c ./libs/printf/ft_printf.c \
		./libs/printf/ft_conver_base_hexa.c ./libs/printf/ft_filter_conver.c \
		./libs/printf/ft_lowercase_hex.c ./libs/printf/ft_putchar_length.c \
		./libs/printf/ft_putcharporcent_length.c \
		./libs/printf/ft_puthex_length.c ./libs/printf/ft_putnbr_length.c \
		./libs/printf/ft_putnbr_unsig_length.c \
		./libs/printf/ft_strchr_length.c ./libs/printf/ft_uppercase_hex.c \

CLIENT_OBJS = $(CLIENT_FILES:%.c=%.o)
SERVER_OBJS = $(SERVER_FILES:%.c=%.o)

all: $(CLIENT) $(SERVER)

$(CLIENT): $(CLIENT_OBJS)
	$(CC) $(CLIENT_OBJS) $(CFLAGS) -o $(CLIENT)

$(SERVER): $(SERVER_OBJS)
	$(CC) $(SERVER_OBJS) $(CFLAGS) -o $(SERVER)

clean:
	$(RM) $(CLIENT_OBJS) $(SERVER_OBJS)

fclean: clean
	$(RM) $(CLIENT) $(SERVER)

re: fclean all
