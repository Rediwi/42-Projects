/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:18:00 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/14 10:35:18 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char str[] = "inserte aqui una frase graciosa e ingeniosa\n";
	printf("%s", ft_strupcase(str));
}*/
