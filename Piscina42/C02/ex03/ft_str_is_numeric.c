/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:38:21 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/13 13:38:40 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] >= 48 && str[c] <= 57)
	{
		c++;
	}
	if (str[c] != '\0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
/*
#include <stdio.h>

int main (void)
{
	char	*str = "";

	printf ("%i\n", ft_str_is_numeric(str));
	return (0);
}*/
