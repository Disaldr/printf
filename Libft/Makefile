# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmumm <kmumm@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 16:16:20 by kmumm             #+#    #+#              #
#    Updated: 2022/01/11 20:40:01 by kmumm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =	ft_isalpha\
		ft_isdigit\
		ft_isalnum\
		ft_isascii\
		ft_isprint\
		ft_strlen\
		ft_memset\
		ft_bzero\
		ft_memcpy\
		ft_memmove\
		ft_strlcpy\
		ft_strlcat\
		ft_toupper\
		ft_tolower\
		ft_strchr\
		ft_strrchr\
		ft_strncmp\
		ft_memchr\
		ft_memcmp\
		ft_strnstr\
		ft_atoi\
		ft_calloc\
		ft_strdup\
		ft_substr\
		ft_strjoin\
		ft_strtrim\
		ft_split\
		ft_itoa\
		ft_uitoa\
		ft_strmapi\
		ft_striteri\
		ft_putchar_fd\
		ft_putstr_fd\
		ft_putendl_fd\
		ft_putnbr_fd\

BONUS_LIST =	ft_lstnew\
		ft_lstadd_front\
		ft_lstsize\
		ft_lstlast\
		ft_lstadd_back\
		ft_lstdelone\
		ft_lstclear\
		ft_lstiter\
		ft_lstmap\
		
SRCS = $(addsuffix .c, $(LIST))
OBJS = $(addsuffix .o, $(LIST))
SRCS_BONUS = $(addsuffix .c, $(BONUS_LIST))
OBJS_BONUS = $(addsuffix .o, $(BONUS_LIST))
HEADER = libft.h
CC = gcc
FLAGS = -Wall -Werror -Wextra


ifdef BONUS_FLAG
	SRC = $(SRCS) $(SRCS_BONUS)
	OBJ = $(OBJS) $(OBJS_BONUS)
else
	SRC = $(SRCS)
	OBJ = $(OBJS)
endif

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

.c.o: $(SRC)
	$(CC) $(FLAGS) -c -o $@ $<

clean: 
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: 
	make BONUS_FLAG=1 all

.PHONY: all clean fclean re bonus