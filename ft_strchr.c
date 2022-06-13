/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:54:27 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/11 07:10:56 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	occ;

	str = ((char *) s);
	occ = ((char) c);
	while (*str)
	{
		if (*str == occ)
			return (str);
		str++;
	}
	if (*str == occ)
		return (str);
	return (0);
}
