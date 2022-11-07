/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:04:58 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/11/07 21:29:36 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hexa(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_printf_hexa(ptr / 16);
		ft_printf_hexa(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
		{
			ft_putchar((ptr + '0'));
		}
		else
		{
			ft_putchar((ptr - 10 + 'a'));
		}
	}
}

int	ft_len_hexa(unsigned long ptr)
{
	int		value;

	value = 0;
	while (ptr)
	{
		ptr /= 16;
		value++;
	}
	return (value);
}

int	ft_hexadecimal(unsigned long ptr)
{
	unsigned int	value;

	value = 0;
	if (ptr == 0)
	{
		write(1, "0x0", 3);
		value += 3;
	}
	else
	{
		write(1, "0x", 2);
		value += 2;
		ft_printf_hexa(ptr);
		value += ft_len_hexa(ptr);
	}
	return (value);
}
