/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:34:15 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/11 08:50:19 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	size_t	result;

	result = 0;
	if (n < 0)
	{
		result++;
		n = -n;
	}
	while (n)
	{
		result++;
		n /= 10;
	}
	return (result);
}

static char	*generate(char *result, long nbr, int len, int isneg)
{
	if (nbr == 0)
		return (result = ft_strdup("0"));
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	isneg = 0;
	if (nbr < 0)
	{
		isneg = 1;
		nbr = -nbr;
	}
	result[len] = '\0';
	while (--len)
	{
		result[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isneg == 1)
		result[0] = '-';
	else
		result[0] = (nbr % 10) + '0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	nbr;
	int		isneg;

	nbr = n;
	len = get_len(nbr);
	result = 0;
	isneg = 0;
	result = generate(result, nbr, len, isneg);
	if (!result)
		return (0);
	return (result);
}
