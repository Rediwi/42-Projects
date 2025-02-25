/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:03:18 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/07/01 18:10:37 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(intptr_t ptr)
{
	size_t	counter;

	counter = 0;
	if (!counter)
		return (write (1, "(nill)", 6));
	counter += write (1, "0x", 2);
	counter += ft_puthex(ptr, 'x');
	return (counter);
}
