# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 12:08:36 by waraissi          #+#    #+#              #
#    Updated: 2023/01/06 02:38:46 by waraissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar -rcs

SRCS = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_memcmp.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_memchr.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_lstnew.c\
 			ft_lstadd_front.c\
 			ft_lstsize.c\
 			ft_lstlast.c\
 			ft_lstadd_back.c\
 			ft_lstdelone.c\
 			ft_lstclear.c\
 			ft_lstiter.c\
 			ft_lstmap.c \
			get_next_line.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
 			ft_putnbr_base_upper.c\
	 		ft_putnbr_base_lower.c\
	   		ft_putnbr_unsigned.c\
		   	ft_putnbr_base.c\
		   	ft_printf.c
			
OBJCTS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJCTS}
	@${AR} ${NAME} ${OBJCTS}
	@echo "\033[92mlibft compiled ✔\033[0m"
	
%.o: %.c libft.h
	@${CC} ${FLAGS} -c $<
	
clean:
	@rm -f ${OBJCTS} ${BOBJCTS}
fclean: clean
	@rm -f ${NAME}

re: fclean all