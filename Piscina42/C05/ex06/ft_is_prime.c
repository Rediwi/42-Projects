/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:15:01 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/19 19:17:52 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 0;
	if (nb < 2)
		return (0);
	if (nb == i)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			prime++;
		i++;
	}
	if (prime == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	printf("%d\n", ft_is_prime(19));
}*/
