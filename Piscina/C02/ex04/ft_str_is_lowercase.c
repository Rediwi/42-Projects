/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:25:01 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/13 14:05:41 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
		{
			letter++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "b";

	printf ("%i\n", ft_str_is_lowercase(str));
	return (0);
}*/
