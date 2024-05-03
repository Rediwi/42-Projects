/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:21:23 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/18 11:19:24 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] == to_find[n])
		{
			if (to_find[n + 1] == '\0')
			{
				return (str + i);
			}
			n++;
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char str[] = "La vida me da 3 limones, yo le devuelvo 42";
	char find[] = "limones";
	printf("%s", ft_strstr(str, find));
}*/
