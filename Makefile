NAME = libftprintf.a

LIST =	ft_printf.c\
		ft_print_base10.c\
		ft_print_base16.c\
		ft_print_letters.c\

CC = gcc

OBJS = $(LIST:.c=.o)

HEADER = *.h

CFLAGS = -Wall -Werror -Wextra

LIBFT_LOCATION = ./libft/

MAKE = make

all: sub_libft $(NAME)

$(NAME): $(LIST) $(HEADER)
	$(CC) $(FLAGS) -c $(LIST)
	ar -rcs $(NAME) *.o $(LIBFT_LOCATION)*.o $?

sub_libft:
	@$(MAKE) libft.a -C $(LIBFT_LOCATION)

clean: 
	rm -f *.out
	rm -f *.o
	rm -f *.a
	@$(MAKE) clean -C $(LIBFT_LOCATION)

fclean:	clean
	rm -f $(NAME)
	@$(MAKE) fclean -C $(LIBFT_LOCATION)

re: fclean all

.PHONY: all clean fclean re sub_libft
