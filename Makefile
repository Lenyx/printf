LIBFT = ./libft/libft.a

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

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all	: $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O)
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all