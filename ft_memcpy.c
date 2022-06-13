/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:32:54 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/11 09:57:15 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest_tmp;
	const char	*src_tmp;

	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dest_tmp = (char *)dst;
	src_tmp = (const char *)src;
	while (n--)
		dest_tmp[n] = src_tmp[n];
	return (dst);
}
