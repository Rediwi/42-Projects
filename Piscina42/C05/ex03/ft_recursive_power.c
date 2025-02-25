/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:34:37 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/19 17:42:39 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (result > result * nb)
		return (0);
	else if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (result);
}
/*
#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int		nb;
	int		power;

	nb = 3;
	power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
}*/
