/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:45:45 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/14 12:52:36 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (num == 1)
				str[i] -= 32;
			num = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			num = 0;
		else
			num = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char str[] = "inserte aqui una frase graciosa, ingeniosa y brillante\n";
	printf("%s", ft_strcapitalize(str));
}*/
