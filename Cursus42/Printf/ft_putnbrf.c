/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:48:44 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/06/26 11:48:48 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrf(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count += ft_putcharf('-');
		count += ft_putcharf('2');
		count += ft_putnbrf(147483648);
	}
	else if (nb < 0)
	{
		count += ft_putcharf('-');
		nb = -nb;
		count += ft_putnbrf(nb);
	}
	else if (nb > 9)
	{
		count += ft_putnbrf(nb / 10);
		count += ft_putnbrf(nb % 10);
	}
	else
	{
		count += ft_putcharf(nb + '0');
	}
	return (count);
}
