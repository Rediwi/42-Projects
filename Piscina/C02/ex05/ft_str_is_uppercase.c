/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:50:39 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/13 17:52:48 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] <= 'Z' && str[letter] >= 'A')
	{
		letter++;
	}
	if (str[letter] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "e";

	printf ("%i\n", ft_str_is_uppercase(str));
	return (0);
}*/
