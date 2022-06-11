/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:33:21 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/11 00:12:02 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(" "));
	if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(substr, s+start, len+1);
	return (substr);
}
