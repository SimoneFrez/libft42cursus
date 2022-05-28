/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:34:18 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/05/26 18:09:41 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;
	char occ;
	size_t len;

	str =((char *)s);
	occ = ((char) c);
	len = ft_strlen(s);

	while(*str)
	{
		if(str[len] == occ)
			return(&str[len]);
		len--;
	}
	if(*str == occ)
		return(str);
	return(0);
}
