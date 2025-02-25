/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:01:44 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/19 12:24:57 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	tm;
	unsigned int	i;
	unsigned int	n;

	tm = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	tm = i;
	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	i = tm;
	while (src[i - tm] != '\0' && i + 1 < size)
	{
		dest[i] = src[i - tm];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	return (tm + n);
}

int main (void)
{
	char src[] = "Equipo sonic el mejor";
    	char dest [] = "2000 42";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}
