/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:08:32 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/11/07 21:08:36 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xx_base(int n, char id, char *base)
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
		if (id == 'x')
			value += ft_printxbase(n, base);
		else
			value += ft_printxbase(n, base);
	}
	return (value);
}

int	ft_printxbase(int n, char *base)
{
	unsigned int		size_base;
	int					i;
	unsigned int		nbr;
	int					value;

	value = 0;
	nbr = n;
	i = 0;
	size_base = 0;
	while (base[size_base])
		size_base++;
	while (n)
	{
		n /= size_base;
		value++;
	}
	if (nbr < size_base)
		ft_putchar(base[nbr]);
	if (nbr >= size_base)
	{
		ft_printxbase(nbr / size_base, base);
		ft_printxbase(nbr % size_base, base);
	}
	return (value);
}
