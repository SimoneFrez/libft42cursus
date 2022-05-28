/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:48:40 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/05/26 11:06:11 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a1;
	size_t	a2;

	i = 0;
	a1 = ft_strlen(dst);
	a2 = ft_strlen(src);
	if (size - 1 <= a1)
		return (a2 + size);
	while (a1 + i < size - 1)
	{
		dst[a1 + i] = src[i];
		i++;
	}
	dst[a1 + i] = '\0';
	return (a1 + a2);
}
