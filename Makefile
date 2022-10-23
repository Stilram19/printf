SRCS	= ft_printf.c \
		  ft_strlen.c \
		  ft_print_arg.c \
		  ft_is_specifier.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_putnbr.c \
		  ft_putnbr_hexa.c
OBJS	= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror
CC		= cc
RM		= rm -f
LIBC	= ar crs
NAME	= libftprintf.a

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
	
