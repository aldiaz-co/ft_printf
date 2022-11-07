/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:06:01 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/11/07 21:08:31 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(int n, char *base)
{
	unsigned int	value;

	value = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		value += 1;
	}
	else
	{
		value += ft_printxbase(n, base);
	}
	return (value);
}
