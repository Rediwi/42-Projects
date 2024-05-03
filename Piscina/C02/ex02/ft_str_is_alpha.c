/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:43:34 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/13 13:27:44 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	letter;

	letter = 0;
	while ((str[letter] <= 'z' && str[letter] >= 'a')
		|| (str[letter] <= 'Z' && str[letter] >= 'A'))
	{
		letter++;
	}
	if (str[letter] != '\0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
