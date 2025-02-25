/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:47:53 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/06/26 11:47:59 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long nb, char c)
{
	unsigned long long	i;

	i = 0;
	if (nb >= 16)
		i += ft_puthex(nb / 16, c);
	if (c == 'x')
		ft_putcharf("0123456789abcdef"[nb % 16]);
	if (c == 'X')
		ft_putcharf("0123456789ABCDEF"[nb % 16]);
	i++;
	return (i);
}
