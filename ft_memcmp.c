/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:21:42 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/11 07:24:33 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first;
	unsigned char	*sec;
	size_t			i;

	first = (unsigned char *)s1;
	sec = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (first[i] != sec[i])
			return (first[i] - sec[i]);
		if (n == 0)
			return (n);
		i++;
	}
	return (0);
}
