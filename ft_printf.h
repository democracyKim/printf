/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <minjukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:53:07 by minkim3           #+#    #+#             */
/*   Updated: 2023/01/26 21:26:48 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include "libft/libft.h"
# include <limits.h>

typedef struct t_options_type {
	int		flag_minus;
	int		flag_plus;
	int		flag_space;
	int		flag_zero;
	int		flag_hash;
	int		width;
	int		width_have;
	int		precision;
	int		precision_have;
	int		type;
	char	*value;
	char	*space;
	char	*prefix;
	char	*print;
	int		val_minus;
	int		val_zero;
	int		val_null;
	int		strlen;
	int		malloc_error;
}	t_options;

int		ft_percent_or_other(char c);
int		ft_flag_checker(char c);
void	ft_flag_check(char c, t_options *string_info, size_t *index);
void	ft_width_check(const char *format, size_t *index, \
		t_options *string_info);
void	ft_precision_check(const char *format, size_t *index, \
		t_options *string_info);
int		ft_type_checker(char c);
int		ft_option_error(t_options *string_info);
int		ft_error_quit(va_list *ap, t_options *string_info);
void	ft_decimal_to_string(t_options *string_info, int decimal);
void	ft_decimal_to_hexadecimal(t_options *string_info, unsigned int decimal);
char	*ft_pointer_to_lowercase_hexadecimal(unsigned long long decimal);
void	ft_apply_int(t_options *string_info, int value);
void	ft_apply_unsigned_int(t_options *string_info, unsigned int value);
void	ft_apply_percent(t_options *string_info, int value);
void	ft_apply_string(t_options *string_info, char *value);
void	ft_apply_pointer(t_options *string_info, unsigned long long value);
int		ft_apply_option(va_list *ap, t_options *string_info);
void	ft_apply_flag(t_options *string_info);
char	*ft_strjoin_three(char	*s1, char *s2, char *s3);
char	*ft_get_cpy_with_this(t_options *string_info, char star, int len);
char	*new_string_with_this(char star, size_t strlen);
void	ft_putchar(char c, int *strlen);
int		ft_malloc_error_int(t_options *string_info);
void	*ft_malloc_error_null(t_options *string_info);
void	ft_malloc_error_void(t_options *string_info);
int		ft_printf(const char *format, ...);
void	ft_apply_flag_minus(t_options *string_info);
void	ft_print_t_options(t_options *string_info);
void	ft_free_options(t_options *string_info);

#endif