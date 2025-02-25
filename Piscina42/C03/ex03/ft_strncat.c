/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:53:48 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/18 11:16:48 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strn_cat(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	if (nb < 1)
	{
		return (dest);
	}
	i = 0;
	n = strn_cat(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "Oleee";
	char dest[] = "42 ";
	printf("%s", ft_strncat(dest, src, 7));
}*/
