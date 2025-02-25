/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:37:34 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/19 17:13:28 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int		nb;
	int		power;

	nb = 5;
	power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
}*/
