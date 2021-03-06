/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:33:21 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/11 09:39:03 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start >= len)
		result = malloc(len + 1);
	else
		result = malloc(ft_strlen(s) - start + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
