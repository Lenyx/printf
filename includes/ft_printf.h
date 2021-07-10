#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_flags
{
	int		type;
	int		width;
}					t_flags;

int					ft_putstrlen(char *str, int len);
int					ft_printf(const char *str, ...);
int					ft_putchar(int c);
int					ft_width_treat(int width, int minus, int has_zero);
void				ft_digit_flag(char c, t_flags *flags);
int					ft_char_treat(char c, t_flags flags);
int					ft_treatment(int c, t_flags flags, va_list args);
int					ft_type_list(int c);
int					ft_str_treat(char *str, t_flags flags);
int					ft_int_treat(int i, t_flags flags);
int					ft_percent_treat(t_flags flags);
int					ft_uint_treat(unsigned int unsi, t_flags flags);
char				*ft_u_itoa(unsigned int n);
char				*ft_ull_base(unsigned long long ull, int base);
char				*ft_str_tolower(char *str);
int					ft_hexa_treat(unsigned int ui, int lower, t_flags flags);
int					ft_pointer_treat(unsigned long long ull, t_flags flags);

size_t				ft_strlen(const char *string);
char				*ft_strdup(const char *s1);
int					ft_tolower(int c);
void				ft_putchar_fd(char c, int fd);
char				*ft_itoa(int n);
int					ft_isdigit(int c);

#endif