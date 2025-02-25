/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:42:34 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/05/01 13:12:36 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (to_find[0] == '\0')
	{
		return ((char *) str);
	}
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find [j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char *) & str[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
