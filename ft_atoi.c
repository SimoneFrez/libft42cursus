/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:29:03 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/01 15:32:10 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(char c)
{
	if (c == '\t'
			|| c == '\v'
			|| c == '\r'
			|| c == '\n'
			|| c == '\f'
			|| c == ' ')
		return (1);
	return (0);
}
int ft_atoi(const char *str)
{
	int i;
	int is_neg;

	is_neg = 0;
	i = 0;
	while(ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
		i = (i * 10) + (*str++ - 48);
	if (is_neg)
		return (i * -1);
	return (i);
}
