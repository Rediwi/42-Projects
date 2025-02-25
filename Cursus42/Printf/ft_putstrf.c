/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:49:38 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/06/26 11:59:56 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrf(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (ft_putstrf("(null)"));
	while (s[i])
	{
		count += ft_putcharf(s[i]);
		i++;
	}
	return (count);
}
/*#include <stdio.h>

int	main()
{
	int result;

	
	result = printf("El string es: %s", "holamundo");
	printf("\n");
	printf("resultado: %d", result);
	return (0);
}*/