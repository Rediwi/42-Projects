/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:15:18 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/13 18:27:31 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	print;

	print = 0;
	while (str[print] >= 32 && str[print] <= 126)
	{
		print++;
	}
	if (str[print] != '\0')
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

int	main(void)
{
	char	str[] = "á";

	printf("%i\n", ft_str_is_printable(&str[0]));
	return (0);
}*/
