/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmateo-h <jmateo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:30:08 by jmateo-h          #+#    #+#             */
/*   Updated: 2024/07/01 13:27:04 by jmateo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_putcharf(char c);
int		ft_putnbrf(int nb);
int		ft_putstrf(char *s);
int		ft_putunsgf(unsigned int n);
int		ft_puthex(unsigned long long nb, char c);
int		ft_pointer(intptr_t ptr);

int		ft_printf(const char *str, ...);

#endif
