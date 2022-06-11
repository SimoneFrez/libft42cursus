/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:15:56 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/05/31 10:26:39 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_size;
	size_t	i;

	i = 0;
	s2_size = ft_strlen(s2);
	if (!(*s2))
		return ((char *)s1);
	while (*s1 && (i < len))
	{
		if ((ft_strncmp(s1, s2, s2_size) == 0)
					&& (i + s2_size <= len))
				return((char *)s1);
				s1++;
				i++;
				}
				return (NULL);
}
