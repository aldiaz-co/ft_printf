/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:48:57 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/11/07 21:32:02 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list args, const char id)
{
	int	val;

	val = 0;
	if (id == 'c')
		val += ft_putchar(va_arg(args, int));
	else if (id == 's')
		val += ft_putstr(va_arg(args, char *));
	else if (id == 'p')
		val += ft_hexadecimal(va_arg(args, unsigned long));
	else if (id == 'd' || id == 'i')
		val += ft_putnbr(va_arg(args, int));
	else if (id == 'u')
		val += ft_unsigned(va_arg(args, int), BASE_DECIMAL);
	else if (id == 'x')
		val += ft_xx_base(va_arg(args, int), id, LOWERCASE_HEXADECIMAL);
	else if (id == 'X')
		val += ft_xx_base(va_arg(args, int), id, UPPERCASE_HEXADECIMAL);
	else if (id == '%')
		val += ft_print_percent();
	return (val);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	size_t	val;
	va_list	args;

	i = 0;
	val = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			val += ft_check(args, str[i + 1]);
			i += 2;
		}
		else
		{
			val += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (val);
}

int main()
{
	//void *c = "sdfghjk";
	ft_printf("%i\n", -159);
	printf("%i", -159);
}