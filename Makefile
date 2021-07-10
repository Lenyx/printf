NAME = libftprintf.a

SRCS =  ft_printf.c \
		sources/ft_char_treat.c \
		sources/ft_flags_treat.c \
		sources/ft_putchar.c \
		sources/ft_treatment.c \
		sources/ft_width_treat.c \
		sources/ft_str_treat.c \
		sources/ft_putstrlen.c \
		sources/ft_int_treat.c \
		sources/ft_percent_treat.c \
		sources/ft_u_itoa.c \
		sources/ft_uint_treat.c \
		sources/ft_ull_base.c \
		sources/ft_hexa_treat.c \
		sources/ft_str_tolower.c \
		sources/ft_pointer_treat.c \
		sources/ft_tolower.c \
		sources/ft_strlen.c \
		sources/ft_strdup.c \
		sources/ft_putchar_fd.c \
		sources/ft_itoa.c \
		sources/ft_isdigit.c \

SURPL_O =	ft_char_treat.o \
			ft_flags_treat.o \
			ft_putchar.o \
			ft_treatment.o \
			ft_width_treat.o \
			ft_str_treat.o \
			ft_putstrlen.o \
			ft_int_treat.o \
			ft_percent_treat.o \
			ft_u_itoa.o \
			ft_uint_treat.o \
			ft_ull_base.o \
			ft_hexa_treat.o \
			ft_str_tolower.o \
			ft_pointer_treat.o \
			ft_tolower.o \
			ft_strlen.o \
			ft_strdup.o \
			ft_putchar_fd.o \
			ft_itoa.o \
			ft_isdigit.o \

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all	: $(NAME)

clean :
	rm -rf $(SURPL_O)
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all