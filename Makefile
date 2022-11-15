NAME	=	libftprintf.a
SRC_DIR	=	srcs/
SRCS	=	ft_printf.c\
			utils.c\
			ft_putchar_len.c\
			ft_putstr_len.c\
			ft_putptr_len.c\
			ft_putnbr_len.c\
			ft_putunsnbr_len.c\
			ft_puthex_len.c
HEADER	=	includes/ft_printf.h
SRC		=	$(addprefix $(SRC_DIR), $(SRCS))
OBJ		=	$(SRC:%.c=%.o)
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all