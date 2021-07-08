#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

typedef struct s_flags
{
	int		type;
}					t_flags;

int					ft_putstrlen(char *str, int len);
int					ft_printf(const char *str, ...);
int					ft_putchar(int c);
int					ft_char_treat(char c);
int					ft_treatment(int c, va_list args);
int					ft_type_list(int c);
int					ft_str_treat(char *str);
int					ft_int_treat(int i);
int					ft_uint_treat(unsigned int unsi);
char				*ft_u_itoa(unsigned int n);
char				*ft_ull_base(unsigned long long ull, int base);
char				*ft_str_tolower(char *str);
int					ft_hexa_treat(unsigned int ui, int lower);
int					ft_pointer_treat(unsigned long long ull);

void				ft_putchar_fd(char c, int fd);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *string);
char				*ft_itoa(int n);
int					ft_isdigit(int c);
int					ft_tolower(int c);

#endif