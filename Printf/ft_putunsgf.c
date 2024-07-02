/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsgf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:01:24 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/06/26 12:01:42 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsgf(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putunsgf(n / 10);
	count += ft_putcharf(n % 10 + '0');
	return (count);
}
/*#include <stdio.h>

int main()
{
	unsigned int number = 12345;
	size_t count = 0;
	ft_putunsgf(number, &count);
	ft_putcharf('\n', &count);
	return (0);
}*/