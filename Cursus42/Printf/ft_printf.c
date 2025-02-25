/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:03:56 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/07/01 13:22:16 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list *va, const char *type, int i)
{
	int	res;

	res = 0;
	if (type[i] == 'c')
		res += ft_putcharf((char)va_arg(*va, int));
	else if (type[i] == 's')
		res += ft_putstrf(va_arg(*va, char *));
	else if (type[i] == 'p')
		res += ft_pointer(va_arg(*va, intptr_t));
	else if (type[i] == 'd' || type[i] == 'i')
		res += ft_putnbrf(va_arg(*va, int));
	else if (type[i] == 'u')
		res += ft_putunsgf(va_arg(*va, unsigned int));
	else if (type[i] == 'x' || type[i] == 'X')
		res += ft_puthex(va_arg(*va, unsigned int), type[i]);
	else if (type[i] == '%')
		res += ft_putcharf('%');
	return (res);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i] != '%')
			count += ft_putcharf(str[i]);
		if (str[i] == '%')
		{
			i++;
			count += ft_check(&va, str, i);
		}
		i++;
	}
	va_end(va);
	return (count);
}
/*#include <stdio.h>

int	main()
{
	ft_printf("%u", 1250);
	printf("%u", 1250);
	return (0);
}*/
/*int	main()
{
	int	result;
	int result2;

	result = ft_printf("%x", 537);
	printf("%x", result);
	printf("\n");
	result2 = printf("%x", 537);
	printf("\n");
	printf("%X", result2);
	return (0);
}*/