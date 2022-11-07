/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:02:24 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/11/07 21:27:09 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// int	ft_len_decimal(int n)
// {
// 	int		value;

// 	value = 0;
// 	if (n < 0)
// 	{
// 		n *= -1;
// 		value++;
// 	}
// 	if (n == 0)
// 		value++;
// 	while (n)
// 	{
// 		n /= 10;
// 		value++;
// 	}
// 	return (value);
// }

// void	ft_printf_decimal(int n)
// {
// 	if (n == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (n < 0)
// 	{
// 		write(1, "-", 1);
// 		n = -n;
// 	}
// 	if (n > 9)
// 	{
// 		ft_print_decimal(n / 10);
// 		ft_printchar((n % 10) + '0');
// 	}
// 	else
// 	{
// 		ft_printchar(n + '0');
// 	}
// }

// int	ft_decimal(int n)
// {
// 	int	val;

// 	val = 0;
// 	ft_printf_decimal(n);
// 	val += ft_len_decimal(n);
// 	return (value);
// }
