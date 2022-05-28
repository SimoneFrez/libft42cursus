/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:32:09 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/05/19 14:28:38 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*dest;
	size_t			i;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if	(!source && !dest)
		return	(NULL);
	if	(dest > source)
		while (++i <= len)
			dest[len -i] = source[len - i];
	else
		while (len-- > 0)
			*dest++ = *source++;
	return (dst);
}
