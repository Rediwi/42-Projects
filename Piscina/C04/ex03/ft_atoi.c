/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:36:01 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/03/20 16:01:00 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str);

int		main(void)
{
	char	*str, *str2;

	str = "    ----+---+++10122000fesfss65+2";
	str2 = "10122000";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
