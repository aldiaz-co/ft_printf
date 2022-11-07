/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:01:46 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/11/07 21:03:58 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define LOWERCASE_HEXADECIMAL "0123456789abcdef"
# define UPPERCASE_HEXADECIMAL "0123456789ABCDEF"
# define BASE_DECIMAL "0123456789"

int		ft_printf(const char *str, ...);
int		ft_check(va_list args, const char id);
int		ft_putchar(int c);
int		ft_printstr(char *str);
void	ft_putstr(char *s);
int		ft_print_percent(void);

void	ft_printf_hexa(unsigned long ptr);
int		ft_len_hexa(unsigned long ptr);
int		ft_hexadecimal(unsigned long ptr);

int		ft_len_decimal(int n);
void	ft_printf_decimal(int n);
int		ft_decimal(int n);

int		ft_unsigned(int n, char *base);

int		ft_xx_base(int n, char id, char *base);
int		ft_printxbase(int n, char *base);

#endif